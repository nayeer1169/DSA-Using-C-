#include <iostream>
using namespace std;
//use to check +ve -ve of a no.
int main(){
    int n;
    cin>>n;
    int i=2;
    int sum=0;

    while(i<=n && i % 2==0){
        sum = sum+i;
        i=i+2;
    }

    cout<<"Value of Sum is :"<<sum<<endl; 
}