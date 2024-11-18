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
 int main()
 {
    Node *root=BT();
    return 0;

 }