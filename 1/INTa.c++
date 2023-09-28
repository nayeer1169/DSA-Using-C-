#include <iostream>
using namespace std;

int main(){
    int a = 123;

    cout<<a<<endl;

    char b ='v'; 

    cout<<b<<endl;

    bool b1= true;
    cout<<b1<<endl;

    float f= 1.2;
    cout<<f<<endl;

    double d =1.23;
    cout<<d<<endl;

    int size = sizeof(a);
    cout<<"Size of a is:"<<size<<endl;

    int z = 'z';
    cout<<z<<endl;
    
    char ch =98;
    cout<<ch<<endl;

    char ch1= 123456;
    cout<<ch1<<endl;       //o/p will show @ since it show the valuie of 64 bit

    unsigned int g = -122;    //o/p will give a large number.
    cout<<g<<endl;

}