#include<iostream>
using namespace std;

class Student{
    int roll;
    float id;
    public:
        Student(int x,float y):roll(x),id(y){
            cout<<"Base construcor Invoked"<<endl
            <<"The roll no. is: "<<roll<<endl
            <<"The id is: "<<id<<endl;
        }
};
int main(){
    Student s(10,120.77);

}