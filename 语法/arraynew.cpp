#include <iostream>
using namespace std;
int main(){
	double *p = new double[10];
	p[0]=0.1;
	p[1]=0.2;
	p[2]=0.3;
	cout<<p[0]<<endl;
	cout<<p[1]<<endl;
	cout<<p[2]<<endl;
	delete[] p;
}