#include<iostream>
using namespace std;
class student{
    string passcode;
    public :
    string name;
    int id;
    void into(){
        cout<<"My name is "<<name<<", my id is "<<id<<"passscode is"<<passcode<<endl;
    }
    void setPass(string s){
        passcode = s;
    }
};
int main(){
    student s1;
    s1.name = "Mohit";
    s1.id = 1;
    s1.setPass("0001");
    s1.into();
    return 0;

}