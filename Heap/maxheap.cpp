#include<iostream>
#include<vector>
using namespace std;
class maxheap{
private:
    vector<int>hp;
public:
    void upHeapyfy(int ci){
        while(ci>0){
            int pi=(ci-1)/2;
            if(hp[ci]>hp[pi]){
                swap(hp[ci],hp[pi]);
                ci=pi;
            }
            else break;
        }
    }
    void downHeapyfy(int idx){
        while(idx<hp.size()){
            int l=2*idx+1;
            int r=2*idx+2;
            int maxIdx=idx;
            if(l<hp.size() && hp[l]>hp[maxIdx])
                maxIdx=l;
            if(r <hp.size() && hp[r]>hp[maxIdx])
                maxIdx=r;
            if(maxIdx!=idx){
                swap(hp[maxIdx],hp[idx]);
                idx=maxIdx;//for the next iteration

            }else{
                break;
            }        
        }
    }

    void push(int element){
        hp.push_back(element);
        upHeapyfy(hp.size()-1);
    }

    bool empty(){
        return hp.size()==0;
    }

    void pop(){
        if(empty()) return;
        swap(hp[0],hp[hp.size()-1]);
        hp.pop_back();
        if(!empty())
        downHeapyfy(0);
    }


    void display(){
        cout<<"[";
        for(int i=0;i<hp.size();i++){
            cout<<hp[i]<<" ";
        }
        cout<<"]";
        cout<<endl;
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
    hp.pop();
    hp.display();
    
    

}