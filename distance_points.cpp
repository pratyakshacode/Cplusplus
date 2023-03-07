#include<iostream>
#include<cmath>
using namespace std;

class point{                                           //to set the points
    int a,b;
    public:
        void print(){
            cout<<"The point of coordinate is : ("<<a<<","<<b<<")"<<endl;
        }
        point(int,int);
    friend float distance(point,point);
};

point::point(int x,int y){
    a=x;
    b=y;
}
float distance(point o1,point o2){                    //to find the distance of the two points
    return sqrt((o2.a-o1.a)*(o2.a-o1.a)-(o2.b-o1.b)*(o2.b-o1.b));
}

int main(){
    int x1,y1,x2,y2;
    cout<<"Enter the x1 and y1 coordinates: "<<endl;
    cin>>x1>>y1;
    point p1(x1,y1);
    p1.print();
    cout<<"Enter the x2 and y2 coordinate: "<<endl;
    cin>>x2>>y2;
    point p2 = point(x2,y2);
    p2.print();
    cout<<"..................."<<endl;
    float dist = distance(p1,p2);
    cout<<"The distance between two points is: "<<dist;
}