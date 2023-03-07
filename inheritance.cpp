#include<bits/stdc++.h>
using namespace std;

class Employee{
    public:
    int id;
    int salary;
    Employee(){}               //we have to make the default constructor as it will be called firstly  
    Employee(int val,int sal){
        id = val;
        salary = sal;
    }

};

class Programmer : public Employee{
    public:
    Programmer(int value,int salr){
        id = value;
        salary = salr;
    }
};

int main(){

Employee e1(1,1000),e2(2,3000);
Programmer p1(3,4000);
cout<<e1.id<<endl;
cout<<e1.salary<<endl;
cout<<e2.id<<endl;
cout<<e2.salary<<endl;
cout<<p1.salary<<endl;

}
