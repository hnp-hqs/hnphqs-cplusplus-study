#include<iostream>
const float In_foot_k=0.0833;
float in_to_foot(float);
int main(){
	using namespace std;
	float h;
	//输入身高(XX 英寸)
	cout<<"请输入升高: _____ 英寸\b\b\b\b\b\b\b\b\b\b";
	cin>>h;
	//转换为英尺
	h=in_to_foot(h);
	//输出结果
	cout<<"您的身高为 "<<h<<" 英尺"<<endl;
	return 0;
}
float in_to_foot(float h){
	return h*In_foot_k;
}