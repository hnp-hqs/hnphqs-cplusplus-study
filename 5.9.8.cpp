#include <iostream>
using namespace std;
int main(){
	char * a[20];
	char x[16];
	int t{};
	cin>>x;
	do{
		t+=1;
		cin>>x;
	}while(strcmp(x,"done"));
	cout<<t<<endl;
}