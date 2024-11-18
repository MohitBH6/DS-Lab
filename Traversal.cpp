#include<iostream>
using namespace std;
class Node
{
    public:
    int data;
    Node *left,*right;

    Node(int value){
        data= value;
        left=NULL;
        right=NULL;
    }
};
    
Node *BT()
{
    int x;
    cout<<"Enter x: "<<endl;
    cin>>x;
    if(x==-1){
        return NULL;
    }
    Node *temp = new Node(x);
    temp->left=BT();
    temp->right=BT();
    return temp;
 }

 //PreOrdered Traversal
 void PreOrder(Node *root){
    if(root==NULL)
    return;
    cout<<root->data;
    PreOrder(root->left);
    PreOrder(root->right);
 } 
//InOrdered Trav
void InOrder(Node *root){
    if(root==NULL)
    return;
    InOrder(root->left);
    cout<<root->data;
    InOrder(root->right);
}
//PostOdered Trav
void PostOrder(Node *root){
    if(root==NULL)
    return;
    PostOrder(root->left);
    PostOrder(root->right);
    cout<<root->data;
}

 int main()
 {
    Node *root=BT();

    //Preorder
    cout<<"Pre Order :"<<endl;
    PreOrder(root);
      cout<<endl;
    //InOrder
    cout<<"In-Order : "<<endl;
    InOrder(root);
    cout<<endl;
    //PostOrder
    cout<<"Post Order : "<<endl;
    PostOrder(root);
 }