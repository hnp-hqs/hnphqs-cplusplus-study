#include <iostream>
using namespace std;
int main(){
	char ch;
	cout<<"Type, and I shall repeat."<<endl;
	cin.get(ch);//从输入流读取一个字符
	while (ch != '.'){
	//判断是否到了句子结尾
	//注意，只有单个的字符才能直接比较，因为实际上它是整型
	//然而如果是char[]就必须用cstring提供的strcmp()比较，相同返回false，不同返回true
		if (ch == '\n'){
		//如果这个字符是换行符
		//就把它插入输出流
			cout<<ch;
		}else{
		//否则，将ASCII码+1再插入输出流
		//注意，程序不会立马输出，而是会等到cin接受到回车后才会输出输出流的字符
			cout<<++ch;
			//若改成ch+1
			//则会输出int类型
			//因为char + int会导致char整型提升
			//最后表达式的运算结果为 int
			//除非显式转换回char
			//(char)(ch+1)或char(ch+1)
		}
		cin.get(ch);
		//从输入流抽取一个字符到ch
	}
}