#include <iostream>
#include <string>
using namespace std;
struct CandyBar{
	string company;
	float weight;
	int ka;
};
int main(){
	CandyBar *snack = new CandyBar;
	*snack={"德芙",2.4,240};
	//申请内存并创建一个 CandyBar指针
	//然后初始化 *CandyBar
	CandyBar* *snacks = new CandyBar*[3];
	//申请内存并创建一个指向int[]的指针;
	snacks[0]=snack;
	cout<<"品牌: "<<snacks[0]->company<<endl
		<<"重量: "<<snacks[0]->weight<<endl
		<<"卡路里: "<<snacks[0]->ka<<endl;
	delete snack;
	delete[] snacks;
	return 0;
}