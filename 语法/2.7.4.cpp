#include<iostream>
using namespace std;
int age_to_mouth(int);

int main(){
	int age,mouth;
	cout<<"Enter your age:";
	cin>>age;
	mouth=age_to_mouth(age);
	cout<<"Your age in mouths is "<<mouth<<endl;
	return 0;
}
int age_to_mouth(int age){
	int mouth=age*12;
	return mouth;
}