#include<iostream>
using namespace std;

class Shopitem{
    int id;
    float price;
    public:
        void setData(int x,float y){
            id = x;
            price = y;
        }
        void getData(void){
            cout<<"The id of the item is "<<id<<endl;
            cout<<"The price for this item is "<<price<<endl;

        }
};

int main(){
    int n,id;
    float p;
    cout<<"Enter the no of items to be stored :"<<endl;
    cin>>n;
    Shopitem *ptr = new Shopitem[n];
    Shopitem *ptritem = ptr;
    
    for(int i=0;i<n;i++){
        cout<<"Enter id and price of the item: "<<i+1<<endl;
        cin>>id>>p;
        ptr->setData(id,p);
        ptr++;
    }

    for(int i = 0;i<n;i++){
        ptritem->getData();
        ptritem++;
    }

    delete[] ptr;

    ptr = NULL;
    return 0;
}