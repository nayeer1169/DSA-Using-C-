#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
/*row 1 -> n
  col 1 -> row
  'A' + i + j -2*/
    int i = 1;
    while(i<=n){
        int j = 1;
        while(j<=n){
        char ch =('A'+ i + j - 2);
        cout<<ch;
        j = j+ 1;
    } 
    cout<<endl;
    i = i + 1;
    }
    

}