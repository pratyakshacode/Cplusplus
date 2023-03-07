#include<iostream>
using namespace std;

int main(){
    int n,i,k;
    cout<<"Enter the no. of diamonds: ";
    cin>>n;
    int carat[n];
    int cost[n];
    cout<<"Enter the no. of carat: \n";

    for(i=0;i<n;i++){
        cin>>carat[i];
    }
    cout<<"Enter the cost of each diamond: "<<endl;
    for(i=0;i<n;i++){
        cin>>cost[i];
    }
    cout<<"Choose one diamond: ";
    cin>>k;
    cout<<cost[k-1]<<endl;

    for(i=k;i<n;i++){
        cout<<carat[i]<<" ";
    }
    cout<<"\n";
    for(i=k;i<n;i++){
        cout<<cost[i]<<" ";
    }
    cout<<"\n";

    cout<<"Choose another diamond out of these: ";
    n=cost[k-1];
    cin>>k;
    cout<<"The total cost of diamond you choose: "<<n+cost[k-1];

    // cout<<"Choose for the highest cost: ";
    // cin>>k;


}