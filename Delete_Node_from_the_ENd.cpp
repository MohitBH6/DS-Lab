#include<iostream>           
using namespace std;
class node{
        public:
        int data;
        node* next;

        node(int value){
            data=value;
            next=NULL;
        }
};
node* CreateLinkedList(int arr[],int index,int size){
       if(index==size){
        return NULL;
       }
       node* temp;
       temp=new node(arr[index]);
       temp->next=CreateLinkedList(arr,index+1,size);
    return temp;
}

int main(){
    node* head;
    head=NULL;
    int arr[5]={1,2,3,4,5};
    head=CreateLinkedList(arr,0,5);

   //Deletion from end
  if(head!=NULL)    //Linkedlist must be exist
  {
     //Linkedlist present with only one node

    if(head->next==NULL){
        node* temp=head;
        delete temp;
        head=NULL;
    }

    //Linkedlist present with more that one node

    else{
        node* tail=head;
        node* prev=NULL;
        while(tail->next!=NULL){
            prev=tail;
            tail=tail->next;
        }
        delete tail;
        prev->next=NULL;
    }
  }

    //printing
    node*temp;
    temp=head;
    while(temp){
    cout<<temp->data<<endl;
    temp=temp->next;
    }
}