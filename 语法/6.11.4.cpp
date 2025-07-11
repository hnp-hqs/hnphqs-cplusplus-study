#include <iostream>
using namespace std;
const int Size = 20;
struct Bop {
	char fullname[Size];
	char title[Size];
	char bopname[Size];
	int preference;
};
void show_menu();
int main(){
	Bop bob = {
		"Bob K",
		"Programing",
		"B.K. QR",
		2
	};
	char ch;
	show_menu();
	cout<<"输入选项: ";
	while (cin.get(ch) && ch != 'q'){
		switch (ch){
			case 'a':
				cout<<bob.fullname<<endl;
				break;
			case 'b':
				cout<<bob.title<<endl;
				break;
			case 'c':
				cout<<bob.bopname<<endl;
				break;
			case 'd':
				switch (bob.preference){
					case 0:
						cout<<bob.fullname<<endl;
						break;
					case 1:
						cout<<bob.title<<endl;
						break;
					case 2:
						cout<<bob.bopname<<endl;
						break;
				}
				break;
		}
		cout<<"输入选项: ";
		cin.get();
	}
	cout<<"再见!"<<endl;
	return 0;
}
void show_menu(){
	cout<<
	"a. display by name		b. display by title\n"
	"c. displsy by bopname		d. display by preference\n"
	"q. quit\n";
}