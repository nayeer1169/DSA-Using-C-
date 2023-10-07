#include <iostream>
using namespace std;

int binarySearch(int n){
    int s=0;
    int e=n-1;
    long long mid=s+(e-s)/2;

    long long ans=-1;
    while(s<=e){
        int square = mid*mid;

        if(square==mid){
            return mid;
        }
        if(square<n){
            ans=ans+mid;
            s=mid+1;
        }
        else{
            e=mid-1;
        }
        return ans;
    }
}

int main(){
    int x;
    return binarySearch(x);
}