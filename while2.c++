#include <iostream>
using namespace std;
//use to check +ve -ve of a no.
int main(){
    int n;
    cin>>n;
    int i=1;
    int sum=0;

    while(i<=n){
        sum = sum+i;
        i=i+1;
    }

    cout<<"Value of Sum is :"<<sum<<endl; 
}