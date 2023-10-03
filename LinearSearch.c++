#include <iostream>
using namespace std;

bool search(int arr[],int size,int key){
    for (int i=0;i<size;i++){
        if(arr[i]==key){
            return 1;
        }
    }
    return 0;
}

int main(){
    int arr[10]={-2,5,6,7,8,-7,4,2,7,1};

    cout<<"Enter the element you need to search for "<<endl;
    int key;
    cin>>key;

    bool found = search(arr,10,key); 

    if (found){
        cout<<"Key is found"<<endl;
    }
    else{
        cout<<"Key is not found"<<endl;
    }
}