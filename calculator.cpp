#include<iostream>
#include<cmath>

using namespace std;
class Calculator{
    protected:
        int x,y;
    public:
        void set_data(int d1,int d2){
            x = d1;
            y = d2;
        }
        void get_data(void){
            cout<<"Your data is: "<<x<<" "<<y<<endl;

        }
};

class Ordinary : public Calculator{
    int add;
    int sub;
    int multi;
    float div;

    public:
        void addtion(){
            add = x+y;
            cout<<"Addition: "<<add<<endl;
        }
        void subtraction(){
            sub = x-y;
            cout<<"Subtraction: "<<sub<<endl;
        }
        void Multiplication(){
            multi = x*y;
            cout<<"Multiplication: "<<multi<<endl;
        }
        void division(){
            div = x/y;
            cout<<"Division: "<<div<<endl;
        }
};

class Scientific: public Calculator{
    float sqt;
    int trg;
    public:
        void trigonometry(){
            cout<<"cos x = "<<cos(x)<<endl;
            cout<<"cos y = "<<cos(y)<<endl;
            cout<<"tan x = "<<tan(x)<<endl;
            cout<<"tan y = "<<tan(y)<<endl;
        }
        void sqroot(){
            cout<<"square root: "<<sqrt(x*y);
        }
};
int main(){
    Ordinary o1,o2;
    o1.set_data(10,20);
    o1.get_data();
    o1.addtion();
    o1.subtraction();
    o1.division();
    o1.Multiplication();
    
    Scientific s1;
    s1.set_data(3.14/2,3.14/2);
    s1.trigonometry();
    s1.sqroot();
    

    return 0;
}