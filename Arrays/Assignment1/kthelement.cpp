#include<iostream>
using namespace std;
int main(){
    int arr[4]={1,2,3,4};
        int k=2;
        int i=0;
        int count=1;
        int no;
        int j=1;
        while(1){
            if(arr[i]==j){
                i++;
                j++;
            
            }
            else{
                count++;
                j++;
            }
            
            if(count==k){
                cout<<j;
                break;
            }
        }
    }