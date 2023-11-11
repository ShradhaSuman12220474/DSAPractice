//Find the product of all the elements in the array;
#include<iostream>
using namespace std;
int main(){
    int arr[5]={1,3,5,7,3};
    int n=sizeof(arr)/sizeof(arr[0]);
    int pr=1;
    for(int i=0;i<n;i++){
        pr*=arr[i];
    }
    cout<<"The product of the elements in the array is: "<<pr;
}