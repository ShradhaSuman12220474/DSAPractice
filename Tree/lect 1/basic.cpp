#include<iostream>
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

void display(TreeNode* root){
    if(root==NULL) return;
    cout<<root->val<<" ";
    display(root->left);
    display(root->right);
}

int sum(TreeNode* root){
    if(root==NULL) return 0;
    return root->val+sum(root->left)+sum(root->right);
}
int size(TreeNode* root){
    if(root==NULL) return 0;
    return 1+size(root->left)+size(root->right);
}

int maximum(TreeNode* root){
    if(root==NULL) return INT8_MIN;
    return max(max(root->val,maximum(root->left)),maximum(root->right));
}
int levels(TreeNode* root){
    if(root==NULL) return 0;
    return 1+max(levels(root->left),levels(root->right));
}
int main(){
  TreeNode* a=new TreeNode(1);
  TreeNode* b=new TreeNode(2);
  TreeNode* c=new TreeNode(10);
  TreeNode* d=new TreeNode(4);
  TreeNode* e=new TreeNode(90);


  //connecting the node of tree
  a->left=b;
  a->right=c;
  b->left=d;
  d->left=e;

  display(a);  
  //finding the sum of the values int the binary tree
  cout<<endl;
  //finding the sum of the node values
  cout<<sum(a);
  cout<<endl;
  //finding the size of the tree
  cout<<size(a);
  cout<<endl;
  //finding the max node values in a binary tree
  cout<<maximum(a);
  cout<<endl;
  //finding the levels in a tree

  cout<<levels(a);

}