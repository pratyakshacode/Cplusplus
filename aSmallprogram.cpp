#include<bits/stdc++.h>
using namespace std;

int main(){

    int roll_no;
    string name;
    cout << "Enter the roll no" << endl;
    cin >> roll_no;
    cout << "Enter the name: " << endl;
    cin >> name;

    ofstream out("a.txt");
    out << name+to_string(roll_no);
    out.close();
    return 0;
}