#include <iostream>
using namespace std;
const int Time=32;
int main(){
	unsigned long long num=1;
	for (int i=2;i<=Time;i++)
		cout<<(num*=i)<<endl;
	return 0;
}