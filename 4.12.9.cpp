#include <iostream>
using namespace std;
struct fish{
	int type;
	int weight;
	float how_long;
};
int main(){
	fish simple_fish={1,20,36.7};
	cout<<"种类: "<<simple_fish.type<<endl
		<<"重量: "<<simple_fish.weight<<endl
		<<"长度: "<<simple_fish.how_long<<endl;
	return 0;
}