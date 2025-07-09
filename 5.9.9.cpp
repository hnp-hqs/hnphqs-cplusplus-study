#include <iostream>
#include <string>
using namespace std;
int main(){
	string x;
	int t{};
	cin>>x;
	do{
		t+=1;
		cin>>x;
	}while(x!="done");
	cout<<t<<endl;
}