#include<iostream>
using namespace std;
class Node
{
    public:
    int data;
    Node *left,*right;
    Node(int value){
        data=value;
        left=right=NULL;
    }
};
Node *insert(Node *root,int target){
    //base case
    if(!root){
    Node *temp=new Node(target);
    return temp;
    }
    //left side
    if(target<root->data){
        root->left=insert(root->left,target);
    }
    //right side
    else{
        root->right=insert(root->right,target);
    }
    return root;
}
void inorder(Node *root){
    if(!root)
    return;
    //left
    inorder(root->left);
    //Node
    cout<<root->data<<" ";
    //right
    inorder(root->right);
}
bool Search(Node *root,int target){
        if(!root)
        return 0;
        if(root->data==target)
        return 1;
        if(root->data>target)
        return Search(root->left,target);
        if(root->data<target)
        return Search(root->right,target);
}
int main(){
    int arr[]={6,3,17,5,11,18,2,1,20,14};
    Node *root=NULL;
    for(int i=0;i<10;i++){
        root=insert(root,arr[i]);
    }
    //Traversal
    inorder(root);
    cout<<endl;

    cout<<"Node is present(1) or not(0) "<<endl;
    cout<<Search(root,11)<<endl;

}