#include<iostream>
using namespace std;
int strlen(char);//cstring即string.h中的strlen函数的自己实现
int main(){
	char a[] {"\"I love the cute furries.\""};
	cout<<"C风格字符串 "<<a<<" 的长度为 "<<strlen(a)<<" 字节"<<endl;
	return 0;
}
int strlen(char a){
	return sizeof(a)/sizeof(char);
}