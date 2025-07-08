#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
struct Student{
	string name;
	long id;
	float score;
};
bool cmp_student(Student x,Student y){
	return x.score>y.score;
}
int main(){
	Student students[2];
	cout<<"输入学生信息"<<endl
		<<"姓名 学号 成绩"<<endl;
	for(int i=0;i<=2;i++){
		cin>>students[i].name
			>>students[i].id
			>>students[i].score;
	}
	sort(
		students,
		students+2,
		cmp_student
	);
	cout<<"最高分: "<<students[0].name<<" "<<students[0].score<<"分"<<endl;
}