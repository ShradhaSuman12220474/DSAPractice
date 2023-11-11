#include<iostream>
#include<stack>
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

void preorderIterative(TreeNode* root){
    stack<TreeNode*> st;
    st.push(root);
    while(st.size()>0){
        TreeNode* temp=st.top();
        st.pop();
        cout<<temp->val<<" ";
        if(temp->right!=NULL) st.push(temp->right);
        if(temp->left!=NULL) st.push(temp->left);
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

  preorderIterative(a);



}
