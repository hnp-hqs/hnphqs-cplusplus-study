#include<iostream>//导入输入输出流头文件
using namespace std;//使用标准命名空间
double long_to_ma(double);//函数原型

int main(){//程序入口函数
	double long_distance,ma_distance;//声明两个变量
	cout<<"请输入long距离: ";//输出提示
	cin>>long_distance;//用户输入long距离
	cout<<long_distance<<"="<<long_to_ma(long_distance)<<endl;//程序输出ma距离
	return 0;//程序结束
}
double long_to_ma(double long_distance){//定义转换函数
	double ma=220*long_distance;//用公式计算并保存
	return ma;//把值返回
}