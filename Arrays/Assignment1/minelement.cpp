// Find the minimum value out of all elements in the array.
#include<iostream>
using namespace std;
int main(){
    int arr[5]={2,5,7,8,6};
    int n=sizeof(arr)/sizeof(arr[0]);
    int min=INT8_MAX;
    for(int i=0;i<n;i++){
        if(arr[i]<min) min=arr[i];


    }
    cout<<min;
}