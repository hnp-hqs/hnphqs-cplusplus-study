#include <iostream>
#include <string>
#include <vector>
using namespace std;
struct Car{
	string make;
	int year;
};
int main(){
	int num;
	cout<<"你要储存几量车? ";(cin>>num).get();
	//cin会忽略空白字符，所以要用get()丢弃
	vector<Car> car_array(num);
	for (int i=0;i<num;i++){
		cout<<"Car #"<<i+1<<endl;
		cout<<"请输入制造商: ";
		getline(cin,car_array[i].make);
		//getline识别到/n后就会结束，这样解释了为什么在cin之后要cin.get()，但这里不是需要.get()
		//getline function from c++ string
		cout<<"请输入生产年: ";
		(cin>>car_array[i].year).get();
	}
	cout<<"这是储存的信息: "<<endl;
	for (Car x : car_array){
		cout<<x.year<<" "<<x.make<<endl;
	}
	return 0;
}