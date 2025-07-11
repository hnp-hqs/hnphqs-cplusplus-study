#include <iostream>
using namespace std;
enum Choice{无, 开始, 设置, 退出};
void showmenu();

int main(){
	showmenu();
	int choice;
	cin>>choice;
	while (choice != 退出){
		switch (choice){
			case 开始:
				cout<<"开始"<<endl;
				break;
			case 设置:
				cout<<"设置"<<endl;
				break;
			default:
				cout<<"非法输入"<<endl;
		}
		showmenu();
		cin>>choice;
	}
}
void showmenu(){
	cout<<
		"请键入数字 1, 2, 或 3\n"
		"1) 开始	2)设置\n"
		"3) 退出\n";
}