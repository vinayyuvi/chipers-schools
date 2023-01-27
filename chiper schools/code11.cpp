#include<iostream>
using namespace std;
int power(int base, int pow){
    if(pow == 0)return 1;
    int smLAns = power(base,pow=1);
    return smLAns*base;
}
int main(){
    cout<<power(2,3);
    return 0;
}