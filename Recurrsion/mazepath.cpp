#include<iostream>
using namespace std;
int mazepath(int sr,int sc,int er,int ec){
    if(sr>er||sc>ec) return 0;
    if(sr==er && sc==ec) return 1;
     return mazepath(sr,sc+1,er,ec)+mazepath(sr+1,sc,er,ec);
    
}
void printPath(int sr,int sc,string s){
    if(sr<1||sc<1) return;
    if(sr==1 && sc==1) {
        cout<<s<<endl;
        return;
    }
     printPath(sr,sc-1,s+'R');
     printPath(sr-1,sc,s+'D');
    
}
int main(){
 cout<<mazepath(0,0,2,2)<<endl;
 printPath(3,3,"");
}