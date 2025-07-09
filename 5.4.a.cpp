#include <iostream>
#include <vector>
using namespace std;
int main(){
	int *size = new int;
	cout<<"输入数组长度: ";cin>>*size;
	vector<int> a(*size);
	cout<<"输入数组内容: ";
	for (int i=0;i<*size;i++){
		cin>>a[i];
	}
	delete size;
	for (int x : a){
		cout<<x<<" ";
	}
}