#include <iostream>
using namespace std;
int* dec_to_bin(int dec,int *i);
int stack[32]{0};
int main(){
    int a;
    int *end = &stack[0];
    cout<<"请输入十进制数: ";cin>>a;
    int *start = dec_to_bin(a,end);
    cout<<"二进制为: ";
    for (int *i=start;i>=end;i--){
        cout<<*i;
    }
    cout<<endl;
}
int* dec_to_bin(int dec,int *i){
    if (dec==0){
        return --i;
    }else{
        *(i++)=dec%2;
        return dec_to_bin(dec/2,i);
    }
}