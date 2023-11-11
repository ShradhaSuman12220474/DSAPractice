#include<iostream>
using namespace std;
int partition(int arr[],int si, int ei){//this code can be optimised by changing the pivot element
    int count=0;
    int pivotElement=arr[(si+ei)/2];
    int pivotIdx=0;
    for(int i=si;i<=ei;i++){
        if(i==(si+ei)/2) continue;
        if(arr[i]<=pivotElement) count++;
    }
    pivotIdx=si+count;
    swap(arr[(si+ei)/2],arr[pivotIdx]);


    int i=si;
    int j=ei;
    while(i<=j){
        if(arr[i]<arr[pivotIdx]) i++;
        else if(arr[j]>arr[pivotIdx]) j--;
        else {
            swap(arr[i],arr[j]);
            i++;
            j--;
        }
    }
    return pivotIdx;

}

void quickSort(int arr[],int si, int ei){
    //base case
    if(si>=ei) return;
    int pi=partition(arr,si,ei);
    //now comes the magic part
    quickSort(arr,si,pi-1);
    quickSort(arr,pi+1,ei);

}
int main(){
    int arr[]={8,1,8,2,7,6,3,4};
    int n=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";

    }
    quickSort(arr,0,n-1);
    cout<<"\nAfter sorting the elements:"<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";

    }

}