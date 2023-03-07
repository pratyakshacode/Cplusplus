#include<iostream>
#include<vector>
using namespace std;

int main(){
    int e;

    vector<int> vect1; //this is a vector of zero length 
    vector<int> vect2(vect1);
    vector<char> vect3(4,'p');

    vector<char> :: iterator it = vect3.begin();
    vect3.insert(it,5,'s');
    for(int i=0; i<vect3.size(); i++){
        cout<<vect3[i]<<" ";
    }

    return 0;

}