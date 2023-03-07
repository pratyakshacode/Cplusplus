#include <iostream>
using namespace std;

class Complex
{
    int a, b;

public:
    void setnum(int x, int y)
    {
        a = x;
        b = y;
    }
    friend Complex sumcomp(Complex o1, Complex o2);
    void printnum()
    {
        cout << "Your complex number is " << a << " + " << b << "i "<<endl;
    }
};

Complex sumcomp(Complex o1, Complex o2)
{
    Complex o3;
    o3.setnum(o1.a + o2.a, o1.b + o2.b);
    return o3;
}

int main()
{
    Complex c1, c2,sum;
    int x, y;

    cout << "Enter the Two Numbers for complex sum: "<<endl;

    cin >> x >> y;
    c1.setnum(x, y);
    c1.printnum();

    cout << "Enter the Two numbers for complex sum: "<<endl;
    cin >> x >> y;
    c2.setnum(x, y);
    c2.printnum();

    sum=sumcomp(c1,c2);
    cout<<"The sum of two complex number is: ";
    sum.printnum();

}