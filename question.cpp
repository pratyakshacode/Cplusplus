#include<bits/stdc++.h>
using namespace std;

int fastExponentiation(int element, int power){

    if(power == 0){
        return 1;
    }

    if(power == 1){
        return element;
    }

    int ans = fastExponentiation(element,power/2);

    if(power & 1){
        ans = element * ans * ans;
    }

    else {
        ans = ans * ans;
    }

    power = power >> 1;

    return ans;
}
int main(){
    int element = 2;
    int power = 10;

    cout << "Enter the element and the power: " << endl;

    cout << fastExponentiation(element,power);
       return 0;
}