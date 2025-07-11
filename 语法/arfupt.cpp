#include <iostream>
const double* f1(const double ar[], int n);
const double* f2(const double* ar, int n);
const double* f3(const double*, int);
//实际上3个声明是一样的
using namespace std;
int main(){
	double av[] = {1.1, 4.5, 1.4};
	
	//指向函数得指针
	const double* (*p1)(const double ar[], int n) = f1;
	/*
	* double*表示函数返回类型 (*p1) 表示p1是一个指针
	* (const double ar[], int n)表示这是一个函数
	* f1是函数的地址
	*/
	auto p2 = f2;
	auto p3 = f3;
	/*
	* C++11特有的auto自动判断类型
	* 知道f2是一个地址，auto会认为p2是指向f2的指针
	*/
	cout<<"p1 at "<<(int*)p1<<endl;
	cout<<"p2 at "<<(int*)p2<<endl;
	cout<<"p3 at "<<(int*)p3<<endl;
	
	//指向函数的指针数组
	const double* (*pa[3])(const double*, int){
		p1,p2,p3
	};
	//与pa相同的数组，注意：pa和pb表示同一个地址
	auto pb = pa;
	//指向"指向函数的指针数组"的指针
	auto pc = &pa;
	
	cout<<"pa at "<<(int*)pa<<endl;
	cout<<"pb at "<<(int*)pb<<endl;
	cout<<"pc at "<<(int*)pc<<endl;
}
const double* f1(const double ar[], int n){
	return ar+n;
}
const double* f2(const double ar[], int n){
	return ar+n;
}
const double* f3(const double ar[], int n){
	return ar+n;
}