#include <iostream>
using namespace std;

int main(){
	double* ted = new double;
	*ted=114.514;
	cout<<"ted = "<<*ted<<" at "<<ted<<endl;
	delete ted;
}
/*
这是输出：
ted = 114.514 at 0xb4000070470c0010
*/