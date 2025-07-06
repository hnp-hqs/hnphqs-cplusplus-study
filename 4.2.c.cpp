#include<iostream>
#include<cstring>//C风格字符串
#include<string>//C++风格字符串
using namespace std;

int main(){
	//安全输入带空格的字符串
	//cin.getline方法(c风格字符串)
	char a[20];
	cin.getline(a,20);
	cout<<a<<endl;
	//cin.get()方法(c风格)
	cin.get(a,20).get();
	cout<<a<<endl;
	//c++的string的getline方法(c++风格)
	string b;
	getline(cin,b);
	cout<<b<<endl;
}