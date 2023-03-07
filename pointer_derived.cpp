#include<iostream>
using namespace std;

class Random{
    public:
        int ran;
        void display(){
            cout<<"The value of ran is: "<<ran<<endl;
        }
};

class Derived : public Random {
    public:
        int der;
        void display(){
            cout<<"The derives variable is: "<<der<<endl;
        }
};
int main(){
    Random *ptr;
    Random r;
    Derived d;
    ptr = &d;
    ptr->ran = 50;
    d.der = 34;
    ptr->display();
    d.display();
}