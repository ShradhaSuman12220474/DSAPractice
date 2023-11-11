//move all the negative no to the beggining and positive to the end;
#include<iostream>
using namespace std;
int main(){
    int arr[]={-5,-4,1,8,-2,3,6};
    int n=7;
    int i=0;
    int j=n-1;
    while(i<j){
        if(arr[i]<0) i++;
        if(arr[j]>0)j--;
        if(arr[i]>0 && arr[j]<0){
            swap(arr[i],arr[j]);
            i++;
            j--;
        }
    }
    //printing the array
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
        
    }
}