// Write a program to calculate the sum of odd numbers between a and b (both inclusive) using
// recursion.
#include<iostream>
using namespace std;

int oddSum(int a,int b){
//base case
if(a==b) return 0;
if(a%2==0){
    return oddSum(a+1,b);
}
else{
    return a+oddSum(a+1,b);
}
}
int main(){
        cout<<oddSum(1,5);
}