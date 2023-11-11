//construct a tree from level order traversal 
#include<iostream>
#include<queue>
#include<stack>
using namespace std;
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
TreeNode* construct(int arr[], int n){
    TreeNode* root=new TreeNode(arr[0]);
    int i=1;
    int j=2;
    queue<TreeNode*> q;
    q.push(root);
    while(q.size()>0 && i<n){
        TreeNode* temp=q.front();
        q.pop();
        TreeNode* l;
        TreeNode* r;
        if(arr[i]!=INT8_MIN) l=new TreeNode(arr[i]);//INT*_MIN represent the NULL
        else l=NULL;
        if(j!=n && arr[j]!=INT8_MIN) r=new TreeNode(arr[j]);
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
//Preorder
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
//Inorder
void inorderIterative(TreeNode* root){
    TreeNode* node=root;
    stack<TreeNode*> st;
    st.push(node);
    while(st.size()>0){
        if(node!=NULL){


        }
    }
} 
//postorder 
void postorder(TreeNode* root){
    stack<TreeNode*> st;
    st.push(root);
    while(st.size()>0){
        TreeNode* temp=st.top();
        st.pop();
        if(temp->left!=NULL) st.push(temp->left);
        if(temp->right!=NULL) st.push(temp->right);
        cout<<temp->val<<" ";
    }
    cout<<endl;
} 
int main(){
    int arr[]={1,2,3,4,5,6,7};
    int n=sizeof(arr)/sizeof(arr[0]);
    TreeNode* root=construct(arr,n);
    // BFSusingQ(root);
    // preorderIterative(root);
    postorder(root);

}