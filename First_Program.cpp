#include<iostream>
using namespace std;

int sum(int x,int y){
    return x+y;

}
int main()
{
    int x=10;
    int y =13;
    if(x>y)
    {cout<<"The sum of two numbers is: "<<x+y<<"\nAnd the product of two numbers is: "<<x*y;
    }
    else{
    cout<<"The number is big\n";
    }
    cout<<sum(x,y);
    return 0;
}
