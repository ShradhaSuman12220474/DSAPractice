// WAP to find the largest three elements in the array.
#include<iostream>
#include<vector>
using namespace std;
int main(){
    int arr[]={3,7,5,3,6};//no should not be repeated;
    int max,max2,max3;
    max=max2=max3=arr[0];
    for(int i=0;i<6;i++){
        if(arr[i]>max){
            max3=max2;
            max3=max;
            max=arr[i];
        }
        else if(arr[i]>max2){
            max3=max2;
            max2=arr[i];
        }
        else if(arr[i]>max3){
            max3=arr[i];
        }

    }
    cout<<"The three lasrgest no are "<<max<<max2<<max3;
}
