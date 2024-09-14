//inserting elements in a linked list(at start)  
#include <iostream>
using namespace std;
class node
{
public:
    int data;
    node *next;

    //constructer
    node(int val){
        data=val;
        next=NULL;
           }
};
int main(){  
    node* head;
    head=NULL;
   int arr[5]={2,4,5,6,8};
   for(int i=0;i<5;i++){
    if(head==NULL){
        head=new node(arr[i]);
    }
   else
   {
    node* temp;
    temp=new node(arr[i]);
    temp->next=head;
    head=temp;
   }
   }
   //printing the elements of our linked list
   node*temp=head;
   while (head!=NULL)
   {
    cout<<temp->data;
    temp=temp->next;
    cout<<endl;
   }
}