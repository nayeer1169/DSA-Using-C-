#include <iostream>
using namespace std;

void printArray(int arr[], int size)
{
    cout << "Printing the array" << endl;
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << "Printing Done" << endl;
}

int main(){
    char ch[5]={'a','b','c','d','e'};
    cout<<ch[3]<<endl;

    for(int i=0; i<5 ; i++){
        cout<<ch[i]<<" ";
    }
    cout<<"Printing DONE"<<endl;

    cout<<endl<<"every thing is fine"<<endl<<endl;
}