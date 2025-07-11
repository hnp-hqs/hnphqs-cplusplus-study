#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <cstdlib>
using namespace std;
struct Donater{
	string name;
	double money;
};
int main(){
	ifstream fin;
	fin.open("6.11.9.txt");
	if (!fin.good()) exit(EXIT_FAILURE);
	int many;
	(fin>>many).ignore();
	vector<Donater> donater(many);
	
	for (Donater &x: donater){
	//注意这里必须用&引用运算符，才能修改x的值
		getline(fin,x.name);//不能用.get()! 因为getline()本来就会抛弃换行符
		(fin>>x.money).ignore();//忽略换行符
	}
	fin.close();//文件信息读完了，关闭文件
	
	bool is_have=false;
	cout<<"****Grand Patrons****"<<endl;
	for (Donater x: donater){
		if (x.money>10000){
			cout<<x.name<<": "<<x.money<<"$"<<endl;
			is_have=true;
		}
	}
	if (!is_have) cout<<"none"<<endl;
	is_have=false;
	cout<<"****Patrons****"<<endl;
	for (Donater x: donater){
		if (x.money<=10000){
			cout<<x.name<<": "<<x.money<<"$"<<endl;
			is_have=true;
		}
	}
	if (!is_have) cout<<"none"<<endl;
	
	return 0;
}