#include <iostream>
#include <vector>
#include <string>
#include <fstream>
#include <algorithm>
using namespace std;

struct Score {
    float chinese;
    float math;
    float english;
};
struct Student {
    unsigned long id;
    string name;
    Score score;
};

void show_main_menu();
Student* search_student(vector<Student> &data);
void add_student(vector<Student> &data);
void show_all_student(vector<Student> &data);
void search_show_student(vector<Student> &data);
void change_student(vector<Student> &data);
void delete_student(vector<Student> &data);
vector<Student> load_class(vector<Student> existing);
void save_class(vector<Student> data);

int main() {
    vector<Student> students;
    int choice;
    
    system("clear");
    while (true) {
        show_main_menu();
        cout << "请选择操作: ";
        cin >> choice;
        
        switch (choice) {
            case 1: add_student(students); break;
            case 2: show_all_student(students); break;
            case 3: search_show_student(students); break;
            case 4: change_student(students); break;
            case 5: delete_student(students); break;
            case 6: students = load_class(students); break;
            case 7: save_class(students); break;
            case 8: return 0;
            default: 
                cout << "无效选择!" << endl;
                cin.ignore();
                cin.get();
        }
        system("clear");
    }
}

// 相等运算符重载
bool operator==(const Student& a, const Student& b) {
    return a.id == b.id;
}

void show_a_student(Student student) {
    cout << student.name << "\t" << student.id << "  \t\t"
         << student.score.chinese << "\t"
         << student.score.math << "\t"
         << student.score.english << "\t" << endl;
}

Student* search_student(vector<Student> &data) {
    unsigned long id;
    cout << "请输入考号: ";
    cin >> id;
    
    for (Student &x : data) {
        if (x.id == id) {
            return &x;
        }
    }
    return nullptr;
}

void show_main_menu() {
    cout <<
        "### 学生成绩管理系统 ###\n"
        "1) 添加学生\t\t2) 所有学生\n"
        "3) 查询学生\t\t4) 更改学生\n"
        "5) 删除学生\t\t6) 加载班级\n"
        "7) 保存班级\t\t8) 退出系统\n";
}

void add_student(vector<Student> &data) {
    unsigned long id;
    string name;
    Score score;
    
    cout << "--- 基本信息 ---" << endl;
    cout << "请输入学生学号: ";
    cin >> id;
    
    // 检查学号是否重复
    for (const Student& s : data) {
        if (s.id == id) {
            cout << "学号已存在！" << endl;
            cin.ignore();
            cin.get();
            return;
        }
    }
    
    cout << "请输入学生姓名: ";
    cin >> name;
    
    cout << "--- 成绩信息 ---" << endl;
    cout << "请输入语文成绩: ";
    cin >> score.chinese;
    cout << "请输入数学成绩: ";
    cin >> score.math;
    cout << "请输入英语成绩: ";
    cin >> score.english;
    
    // 录入成绩
    Student student = {id, name, score};
    data.push_back(student);
    cout << "添加成功！" << endl;
    cin.ignore();
    cin.get();
}

void show_all_student(vector<Student> &data) {
    if (data.empty()) {
        cout << "没有学生数据！" << endl;
        cin.ignore();
        cin.get();
        return;
    }
    
    cout << "姓名\t学号\t\t\t语文\t数学\t英语" << endl;
    for (Student x : data) {
        show_a_student(x);
    }
    cin.ignore();
    cin.get();
}

void search_show_student(vector<Student> &data) {
    Student* student = search_student(data);
    if (student == nullptr) {
        cout << "未找到!" << endl;
        cin.ignore();
        cin.get();
        return;
    } else {
        cout << "姓名\t学号\t\t\t语文\t数学\t英语" << endl;
        show_a_student(*student);
        cin.ignore();
        cin.get();
        return;
    }
}

void change_student(vector<Student> &data) {
    Student* student = search_student(data);
    
    if (student == nullptr) {
        cout << "未找到!" << endl;
        cin.ignore();
        cin.get();
        return;
    }
    
    cout << "--- 当前数据 ---" << endl;
    cout << "姓名\t  学号\t\t\t  语文\t数学\t英语" << endl;
    show_a_student(*student);
    
    cout << "--- 修改数据 ---" << endl;
    Score score;
    cout << "请输入语文成绩: ";
    cin >> score.chinese;
    cout << "请输入数学成绩: ";
    cin >> score.math;
    cout << "请输入英语成绩: ";
    cin >> score.english;
    
    // 录入成绩
    student->score = score;
    cout << "修改成功！" << endl;
    cin.ignore();
    cin.get();
}

void delete_student(vector<Student> &data) {
    Student* student = search_student(data);
    
    if (student == nullptr) {
        cout << "未找到!" << endl;
        cin.ignore();
        cin.get();
        return;
    }
    
    // 修正迭代器计算方式
    auto it = data.begin() + (student - &data[0]);
    data.erase(it);
    cout << "删除成功！" << endl;
    cin.ignore();
    cin.get();
}

// 加载班级函数
vector<Student> load_class(vector<Student> existing) {
    string filename;
    cout << "请输入要加载的文件名: ";
    cin >> filename;
    
    ifstream fin(filename);
    if (!fin) {
        cout << "无法打开文件！" << endl;
        cin.ignore();
        cin.get();
        return existing; // 返回原有数据
    }
    
    vector<Student> newData;
    int count;
    fin >> count; // 读取学生数量
    
    for (int i = 0; i < count; i++) {
        Student s;
        fin >> s.id >> s.name >> s.score.chinese >> s.score.math >> s.score.english;
        newData.push_back(s);
    }
    
    fin.close();
    cout << "成功加载 " << newData.size() << " 名学生数据" << endl;
    cin.ignore();
    cin.get();
    return newData; // 返回新加载的数据
}

// 保存班级函数
void save_class(vector<Student> data) {
    string filename;
    cout << "请输入要保存的文件名: ";
    cin >> filename;
    
    ofstream fout(filename);
    if (!fout) {
        cout << "无法创建文件！" << endl;
        cin.ignore();
        cin.get();
        return;
    }
    
    // 写入学生数量
    fout << data.size() << endl;
    
    // 写入每个学生数据
    for (const Student& s : data) {
        fout << s.id << " " 
            << s.name << " "
            << s.score.chinese << " "
            << s.score.math << " "
            << s.score.english << endl;
    }
    
    fout.close();
    cout << "成功保存 " << data.size() << " 名学生数据到 " << filename << endl;
    cin.ignore();
    cin.get();
}
