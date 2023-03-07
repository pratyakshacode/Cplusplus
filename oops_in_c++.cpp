#include<iostream>
#include<string>
using namespace std;

class Binary{
    string s;

    public:
        void read();
        void check();
        void complement();
        

};

void Binary :: read(){
    cout<<"Enter a Binary Number: ";
    cin>>s;
}

void Binary :: check(){

    for(int i=0;i<s.length();i++){
        if(s.at(i) != '0' && s.at(i)!='1'){
            cout<<"Enter a valid binary string .."<<endl;
            break;
        }
    }
}

void Binary :: complement(){
    for(int i=0;i<s.length();i++){
        if(s.at(i)=='0'){
            s.at(i)= '1';
        }
        else{
            s.at(i)='0';
        }
    }
    cout<<s;
}




int main(){
    Binary bin;
    bin.read();
    bin.check();
    bin.complement();
    return 0;
}