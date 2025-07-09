#include<iostream>
const double Cf_B_kg=2.2;//磅和Kg的转换因子(Conversion factor)
const double Cf_foot_in=12;
const double Cf_in_m=0.0254;

double hw_bmi(double,double);//bmi计算
double b2kg(double);//磅到千克
double foot2in(double);//英尺到英寸
double in2m(double);//英寸到米

int main(){
	using namespace std;
	double foot,in,h;
	double b,w;
	double bmi;
	//输入身高(英尺，英寸)和体重(磅)
	cout<<"请输入身高英尺: ___\b\b\b";cin>>foot;
	cout<<"请输入身高英寸: ___\b\b\b";cin>>in;
	cout<<"请输入体重磅: ___\b\b\b";cin>>b;
	//转换为标准单位
	h=in2m(foot2in(foot)+in);
	w=b2kg(b);
	//计算BMI值
	bmi=hw_bmi(h,w);
	//输出BMI值
	cout<<"您的BMI值为: "<<bmi<<endl;
	return 0;
}
double hw_bmi(double w,double h){
	return w*pow(h,2);
}
double b2kg(double b){
	return b*Cf_B_kg;
}
double foot2in(double foot){
	return foot*Cf_foot_in;
}
double in2m(double in){
	return in*Cf_in_m;
}