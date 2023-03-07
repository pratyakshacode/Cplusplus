#include<iostream>
#include<string>
using namespace std;

class Binary{


public:
    string s;
    void read(){
        cout<<"Enter the binary number: ";
        cin>>s;
    }

    void check(){
        for(int i=0;i<s.length();i++){
            if(s.at(i)!='0' && s.at(i)!='1'){
                cout<<"Enter a valid Binary number";
                break;
            }
        }
    }

    void complement(){
        for(int i=0;i<s.length();i++){
            if(s.at(i)=='0'){
                s.at(i)= '1';
            }
            else{
                s.at(i)='0';
            }
        }
        cout<<s<<endl;
    }

    void twos_complement(){
        cout<<"Enter Binary Number to get two's complement: ";
        cin>>s;
        check();
        for(int i=(s.length())-1;i>=0;i--){
            if(s.at(i)=='1'){
                for(int j=i-1;j>=0;j--){
                    if(s.at(j)=='0'){
                        s.at(j)='1';
                    }
                    else{
                        s.at(j)='0';
                        
                    }
                }
                break;
            }

        }
        cout<<s;
    }

};



int main(){
    Binary bin;
    bin.read();
    bin.check();
    bin.complement();
    bin.twos_complement();

    return 0;
}