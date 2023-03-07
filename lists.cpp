//all about the list in cpp


#include<iostream>
using namespace std;
#include<list>


// this function will take the reference of the list and will enter the elements into it
void Listed(list<int> &listt){
    int n,e;
    cout<<"Enter the size of the list: ";
    cin>>n;
    for(int i=0;i<n;i++){
        cout<<"Enter the "<<i+1<< " element: ";
        cin>>e;
        listt.push_back(e);
    }
}

//this function will show the list(any list you make) just give the reference of the list

void Display(list<int> &listt){
    list<int>::iterator it;
    it = listt.begin();
    for(it=listt.begin();it!=listt.end();it++){
        cout<<*(it)<<" ";
    }
    cout<<endl;
}

//main function

int main(){
    list<int> list1;
    list<int> list2;

    Listed(list1);
    Display(list1);
    Listed(list2);
    Display(list2);
    list1.merge(list2);
    Display(list1);
    list1.sort();
    Display(list1);
    return 0;
}