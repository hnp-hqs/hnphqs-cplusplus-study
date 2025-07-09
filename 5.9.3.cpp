#include <iostream>
using namespace std;
int main(){
	int x,t=0;
	cin>>x;
	do{
		cout<<(t+=x)<<endl;
		cin>>x;
	}while(x!=0);
}