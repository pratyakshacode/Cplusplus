#include<iostream>
#include<fstream>
#include<string>

using namespace std;

int main(){
//By the constructor ..................................

    /* string str;
    ifstream in("io.txt");
    // in>>str;
    getline(in,str);
    cout<<str; */

    // output

    /* ofstream out("io.txt");
    out<<"This file is now writen by the c++ Functionality";
    out.close();
    */


   // by the open() function ...............................

  /* string str1;
   ifstream in;
   in.open("io.txt");
   getline(in,str1);
   cout<<str1;
   */

  /* ofstream out;
  out.open("io.txt");
  out<<"This is now written by the open function";
  out.close();
*/

//taking the whole file as an input
string str2;
ifstream in("io.txt");
while(in.eof() == 0){
    getline(in,str2);
cout<<str2;

}
}