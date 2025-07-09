#include <iostream>
using namespace std;
int main(){
	int a,b;
	cout<<"输入两个整数: ";cin>>a>>b;
	for (int i=a;i<=b;i++)
		for (int j=a;j<=b;j++)
			cout<<i<<" + "<<j<<" = "<<i+j<<endl;
}