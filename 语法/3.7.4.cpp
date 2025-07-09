#include<iostream>
const long ds=3600*24;//一天的秒数

int main(){
	using namespace std;
	long s;
	int d,h,m;
	int r_s;
	//输入秒数
	cout<<"请输入秒数: ";cin>>s;
	//计算天小时分钟秒
	d=s/ds;
	h=(s%ds)/3600;
	m=((s%ds)%3600)/60;
	r_s=s-d*ds-h*3600-m*60;
	//输出结果
	cout<<s<<"秒 = "<<d<<"天"<<h<<"小时"<<m<<"分"<<r_s<<"秒"<<endl;
	return 0;
}