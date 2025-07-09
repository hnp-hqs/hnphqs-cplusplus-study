#include <iostream>
#include <ctime>
using namespace std;
void sleep_t(long time){
	clock_t sleep_time=time*CLOCKS_PER_SEC;
	clock_t start_time=clock();
	while(clock()-start_time<sleep_time);
}
int main(){
	cout<<"等待3秒输出下一条信息"<<endl;
	sleep_t(3);
	cout<<"我来了"<<endl;
}