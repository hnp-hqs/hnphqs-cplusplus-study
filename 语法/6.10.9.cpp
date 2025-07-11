#include <iostream>
using namespace std;
int main(){
	int line{};
	char ch;
	while ((cin.get(ch)) && ch != 'Q'){
		if (ch == '\n')
			line++;
	}
	cout<<"lines: "<<line<<endl;
}