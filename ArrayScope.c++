#include <iostream>
using namespace std;
void update(int arr[],int n){
    cout<<endl<<"Inside the function"<<endl;

    //updating the element of array
    arr[0]=120;
    
    for(int i=0;i<3;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main(){
    int arr[3]={1,3,5};
    update(arr,3);

    //printing the array;
    cout<<endl<<"Printing the main function"<<endl;
    for(int i=0;i<3;i++){
        cout<<arr[i]<<" ";
    }

    cout<<endl;
}