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
        int j = 1;             //for printing 1st triangle
        while(j<=i){
            cout<<j;
            j++;
        }

        int start = i-1;
        while(start){
            cout<<start;
            start = start - 1;
        }
        cout<<endl;
        i=i+1;
    }
}