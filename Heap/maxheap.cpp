#include<iostream>
#include<vector>
using namespace std;
class maxheap{
private:
    vector<int>hp;
public:
    void heapyfy(int ci){
        while(ci>0){
            int pi=(ci-1)/2;
            if(hp[ci]>hp[pi]){
                swap(hp[ci],hp[pi]);
                ci=pi;
            }
            else break;
        }
    }

    void push(int element){
        hp.push_back(element);
        heapyfy(hp.size()-1);
    }

    bool empty(){
        return hp.size()==0;
    }

    void display(){
        cout<<"[";
        for(int i=0;i<hp.size();i++){
            cout<<hp[i]<<" ";
        }
        cout<<"]";
    }


};
int main(){
    maxheap hp;
    hp.push(3);
    hp.push(4);
    hp.push(11);
    hp.push(9);
    hp.push(14);
    hp.push(-1);
    hp.push(30);
    hp.push(44);
    hp.push(50);
    hp.display();
    
    

}