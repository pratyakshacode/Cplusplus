#include<iostream>
using namespace std;

int main(){

    int i,j,k,sum;
    int A[3][3],B[3][3],C[3][3];

    cout<<"Enter the elements into the first matrix: ";
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            cin>>A[i][j];
        }
    }
    cout<<"Enter the elements ino the second matrix: ";

    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            cin>>B[i][j];
        }
    }

    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            sum=0;
            for(k=0;k<3;k++){
                sum += A[i][k]*B[k][j]; 
            }
            C[i][j]=sum;
        }
    }
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            cout<<C[i][j]<<"  ";
        }
        cout<<"\n";
    }

return 0;
}