#include<iostream>
using namespace std;
int main(){
    int arr[]={1,1,2,2,0,0};
    int n=6;
    int lo=0;
    int hi=n-1;
    int mid=0;
    while(mid<=hi){
        if(arr[mid]==2){
            swap(arr[mid],arr[hi]);
            hi--;

        }
        if(arr[mid]==1){
            mid++;
        }
        if(arr[mid]==0){
            swap(arr[mid],arr[lo]);
            lo++;
        }
    }
    //printing the array
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}