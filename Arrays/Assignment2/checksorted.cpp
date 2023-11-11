#include<iostream>
using namespace std;
int main(){
    int arr[]={1,2,3,4,5,6,7};
    int n=7;
    bool flag=false;
    for(int i=1;i<n;i++){
        if(arr[i-1]>arr[i]){
            cout<<"Unsorted";
            flag=true;
            break;
        }
    }
    if(flag==false) cout<<"Sorted";
}