#include <iostream>
#include <string>
using namespace std;
const string m[]{
		"一月",
		"二月",
		"三月",
		"四月",
		"五月",
		"六月",
		"七月",
		"八月",
		"九月",
		"十月",
		"十一月",
		"十二月"
	};
int main(){
	int data[3][12];
	int y_t[3]{};
	int total{};
	for (int i=0;i<3;i++){
		for (int j=0;j<12;j++){
			cout<<"请输入"+m[j]+"销售量";
			cin>>data[i][j];
			y_t[i]+=data[i][j];
		}
		total+=y_t[i];
	}
	cout<<"第一年: "<<y_t[0]<<endl;
	cout<<"第二年: "<<y_t[1]<<endl;
	cout<<"第三年: "<<y_t[2]<<endl;
	cout<<"总计: "<<total<<endl;
}