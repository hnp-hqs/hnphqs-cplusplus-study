#include <iostream>
using namespace std;
int main(){
	array<long double,101> a{1,1,2};
	for (int i=2;i<=100;i++){
		a[i+1]=a[i]*(i+1);
	}
	cout<<a[100]<<endl;
}