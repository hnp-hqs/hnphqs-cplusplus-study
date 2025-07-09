#include <iostream>
#include <string>
using namespace std;
struct CandyBar{
	string company;
	float weight;
	int ka;
} snack{"Mocha Munch",2.3,350};
int main(){
	cout<<"品牌: "<<snack.company<<endl
		<<"重量: "<<snack.weight<<endl
		<<"卡路里: "<<snack.weight<<endl;
	return 0;
}