#include<iostream>
using namespace std;
class node{
      public:
      int data;
      node*next;
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

    int arr[]={2,3,4,5,6};
    head=CreateLinkedList(arr,0,5);
    int x=3;
    int value=30;

    node*temp=head;
    x--;
    while(x--){
        temp=temp->next;
    }
    node*temp2=new node(value);
    temp2->next=temp->next;
    temp->next=temp2;
    
    
    temp=head;
    while(temp){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    

}