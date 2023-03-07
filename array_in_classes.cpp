#include<iostream>
using namespace std;

class Shop{
    public:
        int id[10];
        int price[10];
        int counter=0;

    void getid(){

        cout<<"Enter the id of item: "<<endl;
        cin>>id[counter];
    }

    void setprice(){
        cout<<"Enter the price for the corresponding item: "<<endl;
        cin>>price[counter];
        
    }

    void dispPrice(){
        cout<<"The price of id "<<counter<<" is: "<<price[counter]<<endl;
        counter++;
    }

};

int main(){
    Shop pro;
//    pro.count();
    pro.getid();
    pro.setprice();
    pro.dispPrice();
    pro.getid();
    pro.setprice();
    pro.dispPrice();

}