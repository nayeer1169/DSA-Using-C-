#include <iostream>
using namespace std;
//use to check +ve -ve of a no.
int main(){
    int a;
    cout<<"Enter the value of a"<<endl;
    cin>>a;

    if(a>0){
        cout<<"a is positive";
    }

    else{
        if(a<0){
            cout<<"A is negative";
        }
        else{
            cout<<"a is 0";
        }
    }
}