#include <iostream>
using namespace std;
//Function structure 
void printCounting(int n){
    //function body
    for(int i=1;i<=n;i++){
        cout<<i<<" ";
    }
    cout<<endl;
}

int main(){
    int n;
    cin>>n;
    
    //function call
    printCounting(n);

    return 0;
}