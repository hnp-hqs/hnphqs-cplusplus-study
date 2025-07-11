#include <iostream>
using namespace std;
int main(){

init:
	char *print_p;
data:
	char Hello_world_ch[]{"Hello world!\n"};
start:
	print_p = Hello_world_ch;
	goto print;
print:
	cout<<*print_p;

}
