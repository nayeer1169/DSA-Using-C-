#include <iostream>
using namespace std;
void printArray(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }cout<<endl;
}
void swap(int arr[],int size){
    for(int i=0;i<size;i+=2){
        if(i+1<size){
            swap(arr[i],arr[i+1]);
        }
    }
}
int main(){
    int even[8]={33,67,23,12,22,45,65,11};
    int odd[5]={12,24,36,45,54};

    swap(even,8);
    printArray(even,8);

    cout<<endl;

    
    swap(odd,5);
    printArray(odd,5);

    return 0;

}