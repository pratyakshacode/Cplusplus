#include<iostream>
using namespace std;

class Number{
    int a;
    public:
    int b = 10;
    Number(){}
        Number(int x){
            a=x;
        }
        Number(Number &b){
            a = b.a;
        }
        void display(){
            cout<<a<<endl;
        }
};

int main(){
Number num1,num2,num3;
num1 = Number(4);
num1.display();

num2 = Number(5);
num2.display();

num3 = Number(num1);
num3.display();
Number num4(num2);
num4.display();

}