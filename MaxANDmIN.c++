#include <iostream>
using namespace std;

int getMIN(int num[],int n){
    int min=INT_MAX;

    for(int i=0;i<n;i++){
        if(num[i]<min){
            min=num[i];
        }
    }//returning MIN
    return min;
}

int getMAX(int num[],int n){
    int max=INT_MIN;

    for(int i=0;i<n;i++){
        if(num[i]>max){
            max=num[i];
        }
    }//returning MAX
    return max;
}

int main(){
    int size;
    cin>>size;
    


    int num[100];

    for(int i=0;i<size;i++){
        cin>>num[i];
    }
    cout<<"Maximum value is : "<<getMAX(num,size)<<endl;
    cout<<"Minimum value is : "<<getMIN(num,size)<<endl;

    return 0;
}