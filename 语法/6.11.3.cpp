#include <iostream>
using namespace std;
void show_menu(){
	cout<<	"请选择:\n"
			"c) carnivore	p) pianist\n"
			"t) tree		g) game\n";
}
int main(){
	char choice;
	show_menu();
	cout<<"请输入c, p, t, 或 g: ";
	while (cin.get(choice)){
	switch (choice){
		case 'c':
			cout<<"car..."<<endl;
			break;
		case 'p':
			cout<<"pia..."<<endl;
			break;
		case 't':
			cout<<"tre..."<<endl;
			break;
		case 'g':
			cout<<"gam.."<<endl;
			break;
		default:
			cout<<"请输入c, p, t, 或 g: ";
	}
	}
}