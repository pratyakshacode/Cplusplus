#include<iostream>
using namespace std;

template <class T>
class Calculus{
    int size;
    public:
    T *ptr;

    Calculus(int s){
        size = s;
    }

    T dotProduct(Calculus &x,Calculus &y){
        T a = x.ptr[1]+y.ptr[1];
        return a;
    }
};

int main(){

    Calculus<float> cal(5);
    Calculus<float> c2(4);
    Calculus<float> c3(0);
    float arr[5]={1.1,2.2,3.2,41.5,5.0};
    float arr1[5]={10,2,5,4,2};

    cal.ptr = arr;
    c2.ptr = arr1;

    float a = c3.dotProduct(cal,c2);
    cout<<a;
    return 0;
}