#include<iostream>  //A very useful program
using namespace std;

class Complex{
    int a;
    int b;
    public:
        void setnum(int x,int y){
                a = x;
                b = y;
        }

        void sum(Complex o1,Complex o2){
            a = o1.a + o2.a;
            b = o1.b + o2.b;
        }

        void print(){
            cout<<" The complex number obtained is: "<<a<<"+"<<b<<"i"<<endl;
        }
};

int main()
{   int x,y;
    cout<<"Enter the complex numbers a and b of a+ib : "; //entering 1st complex number
    cin >> x >> y;

    Complex c1,c2,c3;
    c1.setnum(x,y);
    c1.print();

    cout<<"Enter the another complex number a and b of a+ib : "; //entering the another complex number
    cin>>x>>y;
    c2.setnum(x,y);
    c2.print();

    c3.sum(c1,c2); //summation of the two
    cout<<"After sum";
    c3.print();


}