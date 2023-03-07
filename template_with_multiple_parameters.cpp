#include<iostream>
using namespace std;

template<class T1=int,class T2=float>
class Student{
    T1 roll;
    T2 grade;
    public:
        Student(T1 a,T2 b){
            roll = a;
            grade = b;
        }

        void Display(){
            cout<<"The roll no of the student is: "<<roll<<" And grade he/she obtained is: "<<grade<<endl;
        }
};

int main(){

    Student<float,char>obj(12.22,'c');
    obj.Display();

    return 0;
}