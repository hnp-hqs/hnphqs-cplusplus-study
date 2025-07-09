#include <iostream>
using namespace std;

int main(){
	int a[]{10,20,30,40,50};
	int num=0;
	
	for(int i=0;i<=4;i++){
		num += a[i];
	}
	
	cout<<num<<endl;
	return 0;
}