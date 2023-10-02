//to make last code more easy to understand run this code
#include <iostream>
using namespace std;

int power(){
    int a,b;
    cin>>a>>b;

    int ans=1;

    for(int i=1;i<=b;i++){
        ans=ans*a;
    }

    return ans;
}

int main(){
    int ans=power();
    cout<<"Answer is "<<ans<<endl;
}