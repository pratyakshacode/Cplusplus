#include<iostream>
#include<string.h>
using namespace std;

class Student{
    string name;
    int roll;
    float id;
    public:

        void setData(int r,float i,string n){
            name = n;
            id = i;
            roll = r;

        }

        void getData(){
            cout<<"The name of the student is "<<name<<endl;
            cout<<"The roll no. is "<<roll<<endl;
            cout<<"The id of student is "<<id<<endl;
        }
};
int main(){
    int n,roll;
    float id;
    string name;
    cout<<"Enter the number of students : "<<endl;
    cin>>n;
    Student *ptr = new Student[n];
    Student *ptrStd = ptr;

    for(int i=0; i<n; i++){
        cout<<endl;
        cout<<"Enter the name of the Student: "<<endl;
        cin>>name;
        cout<<"Enter the roll no. of Student: "<<endl;
        cin>>roll;
        cout<<"Enter the id of the class: "<<endl;
        cin>>id;

        ptr->setData(roll,id,name);
        ptr++;
        cout<<endl;
        ptrStd->getData();
        ptrStd++;
        
    }
    
    int rollno,i;
    
    cout<<"Enter the roll no. to get information of student: ";
    cin>>rollno;
    // i = n+1;


    

    return 0;
}