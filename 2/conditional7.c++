#include <iostream>
using namespace std;
//use to check +ve -ve of a no.
int main(){
    char ch;
    cout<<"Enter Any CHaracter"<<endl;
    cin>>ch;

    if (ch>=65 && ch<=90){
        cout<<"Upper case"<<endl;
    }
    else if (ch>=97 && ch <=122){
        cout<<"Lower Case"<<endl;
    }
    else{
        cout<<"Numeric";
    }
}