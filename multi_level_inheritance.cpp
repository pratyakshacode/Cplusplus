#include<iostream>
using namespace std;

class Student{
    protected:
        int roll_no;
    public:
        void set_roll(int r){
            roll_no=r;
        }
        void get_roll(){
            cout<<"The roll no. of student is: "<<roll_no<<endl;
        }
};
class Exams : public Student{
    protected:
        float maths;
        float physics;
    public:
        void set_marks(float m, float p){
            maths = m;
            physics = p;
        }

        void get_marks(){
            cout<<"The marks in mathematics are: "<<maths<<endl;
            cout<<"The marks in physics are:  "<<physics<<endl;
        }
};
class Percentage : public Exams
{
    float percent;
    public:
        void get_percent(){
            get_roll();
            get_marks();
            percent = (maths+physics)/2;
            cout<<"The percentage obtained are : "<<percent<<"%"<<endl;
        }
};

int main(){
    Percentage p1;
    p1.set_roll(120);
    p1.set_marks(99,100);
    p1.get_percent();
}