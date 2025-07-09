#include <iostream>
using namespace std;
int gcd(int,int);//The function of greatest common divisors
void swap_int(int &a,int &b){
	int tmp=a;
	a=b;
	b=tmp;
}
int main(){
	int a,b;
	int r;
	cout<<"请输入两个数: ";
	cin>>a>>b;
	if (a>b) swap_int(a,b);//Ensure b>a
	r=gcd(a,b);
	cout<<"最大公因数为: "<<r<<endl;
	return 0;
}
int gcd(int a,int b){
	//b=aq+r so must b>a
	int q=b/a;
	int r=b%a;
	if (r==0) return a;
	return gcd(r,a);
}