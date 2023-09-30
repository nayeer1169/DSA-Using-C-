#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    int i = 1;
    while(i<=n){
        int space = n-i;        //for printing space
        while(space){
            cout<<" ";
            space = space - 1;
        }
        int j = 1;             //for printing star
        while(j<=i){
            cout<<"*";
            j++;
        }
        cout<<endl;
        i=i+1;
    }
}