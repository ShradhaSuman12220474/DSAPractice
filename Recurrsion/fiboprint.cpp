#include<iostream>
using namespace std;
int fiboPrint(int n){
    if(n==1||n==2) return 1;
    return fiboPrint(n-1)+fiboPrint(n-2);
    
}

int main(){
    for(int i=1;i<=5;i++){
        cout<<fiboPrint(i)<<" ";
    }
   
}