//construct a tree from level order traversal 
#include<iostream>
#include<queue>
using namespace std;
class Node{
    public:
    int val;
    Node* left;
    Node* right;
    Node(int val){
        this->val=val;
        left=right=NULL;

    }
};
Node* construct(int arr[], int n){
    Node* root=new Node(arr[0]);
    int i=1;
    int j=2;
    queue<Node*> q;
    q.push(root);
    while(q.size()>0 && i<n){
        Node* temp=q.front();
        q.pop();
        Node* l;
        Node* r;
        if(arr[i]!=INT8_MIN) l=new Node(arr[i]);//INT*_MIN represent the NULL
        else l=NULL;
        if(j!=n && arr[j]!=INT8_MIN) r=new Node(arr[j]);
        else r=NULL;
        //now attaching the left and the right node
        temp->left=l;
        temp->right=r;
        //putting the non NULL node into the queue
        if(l!=NULL) q.push(l);
        if(r!=NULL) q.push(r);

        i+=2;
        j+=2;


    }
    return root;
}
void BFSusingQ(Node* root){
    queue<Node*> q;
    q.push(root);
    while(q.size()>0){
        Node* temp=q.front();
        q.pop();
        cout<<temp->val<<" ";
        if(temp->left!=NULL) q.push(temp->left);
        if(temp->right!=NULL) q.push(temp->right);
    }
    cout<<endl;
}
int main(){
    int arr[]={1,2,3,4,5,INT8_MIN,6,INT8_MIN,INT8_MIN,7,8,9};
    int n=sizeof(arr)/sizeof(arr[0]);
    Node* root=construct(arr,n);
    BFSusingQ(root);

}