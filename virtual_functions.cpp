#include<bits/stdc++.h>
using namespace std;

class Student{
    protected:
    int roll;
    int id;
    int marks;
    public:
    void setData(int r, int i, int m){
        roll = r;
        id = i;
        marks=m;

    }

    void Display(){}
};

class Study : public Student{
    int perform;
    int res;
    public:

    void set(int p, int r){
        perform = p;

    }

    void Display(){
        cout<<"The roll no of the student is: "<<roll<<endl;
        cout<<"The id of the class is: "<<id<<endl;
        cout<<"The performance in the studies are: "<<perform<<endl;
        
    }
};

class Result : public Student {
    int res;
    public:
    void Display(){
        cout<<"The overall result of the student is : "<<res<<endl;
    }
};

int main(){
    Student * ptr;
    Student * ptr1;
    Study st;
    Result reslt;

    ptr = &st;
    ptr1= &reslt;

    ptr->Display();
    
}