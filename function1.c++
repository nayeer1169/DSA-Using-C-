#include <iostream>
using namespace std;
int power(int a, int b){
    int ans=1;
    for(int i=1;i<=b;i++){
        ans=ans*a;
    }
    return ans;
}
int main(){
    int a,b;
    cin >> a >> b;
int ans=1;
    for(int i=1;i<=b;i++){
        ans = ans*a;
    }
    cout<<"Answer is : "<<ans<<endl;

    int c,d;
    cin >> c >> d;
    ans=1;
    for(int i=1;i<=d;i++){
        ans=ans*c;
    }
    cout<<"Answer is : "<<ans<<endl;

    int e,f;
    cin >> e >> f;
    ans=1;
    for(int i=1;i<=f;i++){
        ans=ans*e;
    }
    cout<<"Answer is : "<<ans<<endl;


    //this is very bulhy process so to overcome this we will make FUNCTION
    }