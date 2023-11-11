#include<iostream>
#include<queue>
using namespace std;
//making the class node
class TreeNode{
    public:
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int val){
        this->val=val;
        left=right=NULL;
    }
};
void BFSusingQ(TreeNode* root){
    queue<TreeNode*> q;
    q.push(root);
    while(q.size()>0){
        TreeNode* temp=q.front();
        q.pop();
        cout<<temp->val<<" ";
        if(temp->left!=NULL) q.push(temp->left);
        if(temp->right!=NULL) q.push(temp->right);
    }
    cout<<endl;
}

int main(){
  TreeNode* a=new TreeNode(1);
  TreeNode* b=new TreeNode(2);
  TreeNode* c=new TreeNode(10);
  TreeNode* d=new TreeNode(4);
  TreeNode* e=new TreeNode(90);
  TreeNode* f=new TreeNode(45);


  //connecting the node of tree
  a->left=b;
  a->right=c;
  b->left=d;
  b->right=e;
  c->left=f;

  BFSusingQ(a);  



}
