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
int level(TreeNode* root){
    if(root==NULL) return 0;
    return 1+max(level(root->left),level(root->right));
}
void nthLevel(TreeNode* root,int clevel,int rlevel){
    if(root==NULL) return;
    if(clevel==rlevel) {
        cout<<root->val<<" ";
        return;//for the optimisation
    }
    nthLevel(root->left,clevel+1,rlevel);
    nthLevel(root->right,clevel+1,rlevel);
    
    
}
void nthLevelRev(TreeNode* root,int clevel,int rlevel){
    if(root==NULL) return;
    if(clevel==rlevel) {
        cout<<root->val<<" ";
        return;//for the optimisation
    }
    nthLevelRev(root->right,clevel+1,rlevel);
    nthLevelRev(root->left,clevel+1,rlevel);
    
}

void BFS(TreeNode* root){
    int n=level(root);
    for(int i=1;i<=n;i++){
        nthLevel(root,1,i);
        cout<<endl;
    }
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

  BFS(a);  



}
// 1 
// 2 10
// 4 90 45