#include <iostream>
using namespace std;
unsigned long long 阶乘(int n){
	if (n==0)
		return 1;
	return 阶乘(n-1)*n;
}
int main(){
	int num;
	cin>>num;
	cout<<阶乘(num)<<endl;
	return;
}