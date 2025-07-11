#include <iostream>
#include <cmath>
using namespace std;
const double Pi = 3.141592653589;
struct Rect{
	double x;
	double y;
};
struct Polar{
	double d;
	double rad;
};
Polar* rect_to_polar(const Rect*);
int main(){
	//声明变量
	Rect rect;
	Polar* polar;
	//输入直角坐标
	cout<<"请输入直角坐标: ";
	cin>>rect.x>>rect.y;
	//转换为极坐标
	polar = rect_to_polar(&rect);//必须用完后释放内存
	//输出极坐标
	cout<<"极坐标: "
		<<polar->d<<" cos("<<(polar->rad/Pi)<<" π)  "
		<<polar->d<<" sin("<<(polar->rad/Pi)<<" π)\n";
	delete polar;
	return 0;
}
Polar* rect_to_polar(const Rect* rect){
	Polar *polar = new Polar;
	*polar = {
		sqrt(pow(rect->x ,2) + pow(rect->y, 2)), //d
		atan2(rect->y, rect->x) //rad
	};
	return polar;
}