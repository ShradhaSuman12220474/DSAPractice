#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    string s="HelloWorld";
    reverse(s.begin(),s.begin()+5);
    cout<<"Reversed string from start to half :"<<s<<endl;
    reverse(s.begin()+1,s.begin()+5);
    cout<<"Reversed string from 2-5"<<s;
}