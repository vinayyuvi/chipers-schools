#include<iostream>
using namespace std;
class student{
    string passcode;
    friend class bestfriend;
    protected:
    int age;
    public:
    string name;
    int id;
    void into(){
                cout<<"My name is "<<name<<", my id is "<<id<<"passscode is"<<passcode<<endl;

    }
    void setPass(string s, int a){
        passcode = s;
        age = a;
    }
    friend void hacker(student s); 
};
void hacker(student s){
    cout<<s.passcode<<" "<<s.age<<endl;
}
class bestfriend{
    public:
    void sharingsecret(student s){
         cout<<s.passcode<<" "<<s.age<<endl;
    }
};
int main(){
    student s1;
    s1.setPass("0001",10);
    bestfriend bff;
    bff.sharingsecret(s1);
    return 0;
}