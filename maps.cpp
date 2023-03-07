#include<iostream>
#include<map>
#include<string>
using namespace std;

template<class T1,class T2>
void setData(map<T1,T2> &map1){
    T2 n,value;
    T1 key;
    cout<<"Enter the size of the map: ";
    cin>>n;

    for(int i=0; i<n; i++){
        cout<<"Enter the key: ";
        cin>>key;
        cout<<"Enter the corresponding value: ";
        cin>>value;
        map1[key] = value;
    }
}

void Display(map<string,int> &map1){
    map<string,int> :: iterator it;
    it = map1.begin();
    for(it=map1.begin();it!=map1.end();it++)
    cout<<it->first<<" "<<it->second<<endl;
}

int main(){
    map<string,int> map1;
    map<int,float> map2;
    setData(map1);
    Display(map1);
    

    return 0;
}