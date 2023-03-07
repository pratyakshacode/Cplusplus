#include<iostream>
using namespace std;

class Class2;           //declaring the class

class Class1{
    int a;
    public:
    void setData(int arg){
        a = arg;
    }
    void Display(){
        cout<<"The value of a is: "<<a<<endl;
    }

    friend void Exchange(Class1 &,Class2 &);   //making exchange function as a friend of class1 to access the data
};

class Class2{
    int b;
    public:
    void setData(int x){
        b = x;
    }
    void Display(){
        cout<<"The value of b is: "<<b<<endl;
    }

    friend void Exchange(Class1 &,Class2 &); //similar to above
};

void Exchange(Class1 &x,Class2 &y){              //defining the exchange function
        int temp = y.b;
        y.b = x.a;
        x.a = temp;

}

int main(){
    Class1 c1;
    Class2 c2;

    c1.setData(24);
    c2.setData(35);

    c1.Display();
    c2.Display();

    Exchange(c1,c2);           

    c1.Display();
    c2.Display();

}