/*
* resource: half-interval_search.cpp
* author: hnphqs
*/
#include<iostream>
using namespace std;
int his(int a[],int v,int low,int high);
/*二分查找
* 入参 数组,查找对象
* 返回 查找对象的索引
*/
int a[2001];
int main(){
    int v,n,index;
    cin>>n;
    for(int i=0;i<=n-1;i++){
        cin>>a[i];
    }
    cin>>v;
    if (a[n-1]<v || a[0]>v){
        cout<<-1<<endl;
    }else{
        index=his(a,v,0,n);
        cout<<index<<endl;
    }
    return 0;
}
int his(int a[],int v,int low,int high){
    int mid=(low+high)/2;
    if(a[mid]>v)
        high=mid;
    else if(a[mid]<v)
        low=mid;
    else if(a[mid]==v)
        return mid;
    return his(a,v,low,high);
}