#include<iostream>
using namespace std;

class Student{
    protected:
        int roll_no;
    public:
        void setroll(int x){
            roll_no = x;
        }
        void disproll(){
            cout<<"Your Roll No. is: "<<roll_no<<endl;
        }
};

class Studies : virtual public Student{
    protected:
        float maths;
        float physics;

    public:
        void set_marks(float m, float p){
            maths = m;
            physics = p;
        }
        void get_marks(){
            cout<<"Marks in mathematics are: "<<maths<<endl
            <<"marks in physics are: "<<physics<<endl;
        }
};

class Sports: public virtual Student{
    protected:
        float perform;
    public:
    Sports(){}
        // Sports(int s){
        //     perform = s;
        // }
        // void setper(int s){
        //     perform = s;
        // }
        void performance(){
            cout<<"The overall performance in sports is: "<<perform<<endl;
        }
};

class Result : public Studies ,public Sports{
    int res;
    public:
    // Result(){}
    Result(int p){
        perform = p;
    }
        void show(){
            disproll();
            get_marks();
            performance();
            cout<<"The result is: "<<(maths+physics+perform)/3<<"%"<<endl;
        }
};
int main(){
    Result rt(98);
    
    rt.setroll(120);
    rt.set_marks(95,95);
    
    
    rt.show();   


}