#include <iostream>
#include <vector>
using namespace std;
struct Data {
	double x;
	double y;
	double aver;
};

int main() {
	double x = -1, y = -1; // 初始化为非0值确保进入循环
	vector<Data> dataVec;

	// 不断输入2个数，直到其中一个为0
	while (true) {
		cin >> x >> y;
		if (x == 0 || y == 0) break; // 有0则退出

		// 计算并添加
		dataVec.push_back({x, y, 2*x*y/(x+y)});
	}
	//输出
	for (Data x: dataVec){
		cout<<x.aver<<endl;
	}
	return 0;
}