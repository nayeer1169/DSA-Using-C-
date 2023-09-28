#include <iostream>
using namespace std;

int main(){
    float farenheit,  celsius;
    cout<<"Enter the farenheit temperature ";
    cin>>farenheit;

    while(farenheit>=0){
        celsius = (5.0/9.0)*(farenheit-32.0);
        cout<<"Celsius is "<<celsius<<endl;
        break;

    }
}