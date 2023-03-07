#include<iostream>
using namespace std;


class Base{
    protected:
    int a,b;
    public:
       Base(int s,int t){
           a = s;
           b = t;
           cout<<"Base constructor called"<<endl;
       }
};

class Derives:public Base{
    public:
    int x,y;
        Derives(int i,int j,int k,int l): Base(i,j){
            x = k;
            y = l;
        }
        void show(){
            cout<<"The value of a and b is: "<<a<<" "<<b<<endl;
            cout<<"The value of x and y is: "<<x<<" "<<y<<endl;
        }
};
int main(){
    Derives d(4,5,6,7);
    d.show();

}