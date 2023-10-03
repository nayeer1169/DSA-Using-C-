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

int main()
{
    int number[15];

    cout << "value at 14 index is  " << number[1] << endl;
    // cout<<"value at 30 index  "<<number[30]<<endl;

    int second[3] = {2, 5, 7};
    cout << "value at 2 index is  " << second[2] << endl;

    cout << "everything is fine" << endl;

    int third[15] = {2, 7};
    int n = 15;
    printArray(third, 15);

    // initializing location with zero
    int fourth[10] = {0};
    n = 10;
    printArray(fourth, 10);

    int fifth[10] = {1};
    n = 10;
    printArray(fifth, 10);

    int fifthSize = sizeof(fifth) / sizeof(int);
    cout << "Size of fifth is " << fifthSize << endl;
    return 0;
}