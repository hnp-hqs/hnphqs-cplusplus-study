#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
bool cmp(float x,float y){
	return x<y;
}
int main(){
	float total_grade{};
	float average_grade{};
	int n;
	cout<<"请输入40码跑次数: ";cin>>n;
	vector<float> grade(n);//创建vector模板变量grade
	cout<<"请输入"<<n<<"次40码跑成绩: ";
	for (int i=0;i<n;i++){
		cin>>grade[i];
		total_grade+=grade[i];
	}
	average_grade = total_grade/n;
	sort(grade.begin(),grade.end(),cmp);
	//似乎 .begin()返回第一个元素的指针
	//.end()返回最后一个元素的指针
	//查得是迭代器
	cout<<"平均成绩: "<<average_grade<<endl;
	cout<<"最高成绩: "<<*grade.begin()<<endl;
	//此处验证，似乎确实是指针
	return 0;
}