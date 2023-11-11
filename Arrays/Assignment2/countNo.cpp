// Count the number of elements strictly greater than x.
#include<iostream>
using namespace std;
int main(){
    int x;
    cin>>x;
    int count=0;
    int arr[5]={2,4,5,7,3};
    for(int i=0;i<5;i++){
        if(arr[i]>x) count++;
    }
    cout<<count;
}