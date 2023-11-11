// Find the second largest element in the given Array in one pass.
#include<iostream>
using namespace std;
int main(){
    int arr[5]={10,5,8,1,9};
    int n=sizeof(arr)/sizeof(arr[0]);
    int max=INT8_MIN;
    int smax=INT8_MIN;
    for(int i=0;i<n;i++){
        if(arr[i]>max) {
            smax=max;
            max=arr[i];
        }
        else if(arr[i]>smax && arr[i]<max) smax=arr[i];
    }
    cout<<"The largest element is: "<<max<<endl;
    cout<<"The second largest element is: "<<smax;
}
// -> If num is greater than the current largest,
// we update secondLargest to the previous largest and largest to num.
// This means we found a new largest element, and the old largest becomes 
// the second largest.
// -> If num is not greater than largest but is greater than the current
// secondLargest and not equal to largest, we update secondLargest to num. 
// This ensures that we keep track of the second largest element in the array.