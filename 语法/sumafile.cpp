#include <iostream> //cin cout
#include <fstream> //fin fout
#include <cstdlib> //support for exit()
using namespace std;
const int Size = 60;
int main(){
	char file_name[Size];
	ifstream fin;
	cout<<"输入文件名: ";
	cin.getline(file_name, Size);
	fin.open(file_name);
	if (!fin.is_open()){
		cout<<"错误: 无法打开文件"<<endl;
		exit(EXIT_FAILURE);
	}
	double value;
	double num=0;
	int count=0;
	fin>>value;
	while (fin.good()){
		++count;
		num += value;
		fin>>value;
	}
	if (fin.eof())
		cout<<"读取结束"<<endl;
	else if (fin.fail())
		cout<<"错误: 数据输入"<<endl;
	else
		cout<<"错误: 未知错误"<<endl;
	if (count == 0)
		cout<<"提示: 没有读取到如何信息"<<endl;
	else{
		cout<<"读到的个数: "<<count<<endl
			<<"总计: "<<num<<endl
			<<"平均数: "<<num/count<<endl;
	}
	fin.close();
	return 0;
}