#include <iostream>
using namespace std;
struct Saving{
	double 利息;
	double 原始存款;
	double 存款;
};
int main(){
	Saving Daphne{0.1,100,100};
	Saving Cleo{0.05,100,100};
	int year;
	Daphne.存款+=Daphne.原始存款*(1+Daphne.利息);
	Cleo.存款*=1+Cleo.利息;
	for (year=1;Daphne.存款>Cleo.存款;year++){
		Daphne.存款+=Daphne.原始存款*Daphne.利息;
		Cleo.存款*=1+Cleo.利息;
	}
	cout<<year<<"年"<<endl;
	cout<<"Daphne: "<<Daphne.存款-100<<endl;
	cout<<"Cleo: "<<Cleo.存款-100<<endl;
}