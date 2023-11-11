#include<iostream>
using namespace std;
 int main(){
    int nums1[]={1,2,3,0,0,0};
    int nums2[]={2,5,6};
    int m=6;
    int n=3;
    int i=0;
    int j=0;
     while(i<m){
         if(nums1[i]>nums2[j]) swap(nums1[i],nums2[j]);
         i++;
     }
     for(int i=(m-n);i<m;i++){
         nums1[i]=nums2[j];
         j++;
         
     }

     for(int i=0;i<m;i++){
        cout<<nums1[i]<<" ";

     }

 }