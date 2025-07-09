#include <iostream>
#include <string>
using namespace std;
int main(){
	string first_name,last_name;
	char grade;
	int age;
	cout<<"名: ";getline(cin,first_name);
	cout<<"姓: ";getline(cin,last_name);
	cout<<"成绩: ";cin>>grade;
	cout<<"年龄: ";cin>>age;
	cout<<"Name: "+first_name+", "+last_name<<endl
		<<"Grade: "<<grade<<endl
		<<"Age: "<<age<<endl;
	return 0;
}