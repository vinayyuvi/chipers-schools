#include<iostream>
using namespace std;
int main(){

    int a = 10;
    int*p = &a;
    char ch = 'a';
    char* pch = &ch;
    if(sizeof(pch) == sizeof(p)){
       cout<<"hey"<<endl;
    }else{
       cout<<"hii"<<endl;
    }
   // cout<<*(&a)<<endl;
   // cout<<*p<<endl;
  // cout<<sizeof(p)<<endl;
    return 0;
}