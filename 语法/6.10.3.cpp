#include <iostream>
using namespace std;
int main(){
	char ch;
	int ct1{},ct2{};
	while ((ch = cin.get()) != '$'){
		cout << ch;
		ct1++;
		if (ch == '$')
			ct2++;
		cout << ch;
	}
	cout<<"ct1: "<<ct1<<endl
		<<"ct2: "<<ct2<<endl;
	return 0;
}