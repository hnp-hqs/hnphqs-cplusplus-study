#include<iostream>
#include<cstring>

int main(){
	using namespace std;
	const int Size=15;
	char name_1[Size];
	char name_2[Size]="C++OwO";
	cout<<"I'm "<<name_2<<". What's your name?"<<endl;
	cin>>name_1;
	cout<<"Hi "<<name_1<<", your name has "<<strlen(name_1)<<" letters and is stored in an array of "<<sizeof(name_1)<<" bytes"<<endl;
	return 0;
}