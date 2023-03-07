#include<bits/stdc++.h>
using namespace std;


class MathLib{
public:

float sum(float a, float b){
    return a+b; 
}

float diff(float a, float b){
   return abs(a-b); 
}

float multiply(float a, float b){
   return a*b;
}

float divide(float a, float b){
    if(b == 0){ 
       cout<<  "The divident should not be 0";
        return;   
    }
    else return a/b;
}

float arraySum(float * arr, float n){
    int sum = 0;

    for(int i=0; i<n; i++){
        sum += arr[i];
    }
   return sum;
}

void sumComplex(float a1, float b1, float a2, float b2){
   cout <<  a1 + a2 << "+" << b1 + b2 << "i" << endl;
}

int sqr(int a){
    return a* a;
}
// area of various shapes

float areaOfRectangle(int len, int breadth){
   return len * breadth;
}

float areaOfSquare(float a){
   return a* a;
}

float areaOfCircle(double r){
   return double(3.14 * r * r);
}

float areaOfTrapezium(float s1, float s2, float height){
   return float((s1 + s2) * height / 2);
}

// surface area 

float surfaceOfCube(int a){
   return 4* a;
}
float surfaceOfCuboid(float l, float b, float h){

   return 2 * (l+ b) * h;
}

float surfaceOfCone(float r, float h, float l=0){
    if(l == 0){
        l = sqrt(r * r + h * h);
    }

    cout<< 3.14* r*l;
}

float surfaceOfSphere(float r){
   return 4 * 22 *  sqr(r) /7 ;
}

float surfaceOfHemisphere(float r){
   return 2 * 22 * sqr(r) / 7;
}

//total surface area 
float totalOfCuboid(float l, float b, float h){
   return 2*((l*b) + (b*h) + (h*l));
}

float totalOfCube(float a){
    return 6 * a;
}

float totalOfCone(float r, float h, float l=0){
    if(l == 0){
        l = sqrt(r*r + h*h);
    }

    return 22 * r * (l + r) / 7;
}

float totalOfHemisphere(int r, int h){
    
}
};
int main(){

MathLib m;
m.divide(1,0);
m.sumComplex(2,3,4,5);
m.areaOfCircle(3);
m.surfaceOfCuboid(1.0,2.3,3.8);
m.surfaceOfCone(2,3);
    return 0;
}