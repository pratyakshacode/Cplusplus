#include <bits/stdc++.h>
using namespace std;

int main() {

int t;
cin >> t;

while(t--){
        
        int a,b,x;
        bool equal = false;
        
        cin >> a >> b >> x;
        
        if(a == b){
                cout << "YES" << endl;
        }
        else if( a < b ){
                
                while( a < b){
                        a = a+x;
                        b = b-x;
                        
                        if(a == b){ 
                                equal = true;
                                cout << "YES" << endl;
                                break;
                        }
                }
                
                if(equal == false) cout << "NO" << endl;
        }
        
        else if(b < a){
                while(b < a){
                        a = a-x;
                        b = b+x;
                        
                        if(a == b){
                                cout << "YES" << endl;
                                equal = true;
                                break;
                        }
                }
                
                if(equal == false) cout << "NO" << endl;
        }
}
	return 0;
}
