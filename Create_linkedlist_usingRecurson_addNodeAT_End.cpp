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
int main()
{
    node* head;
    head=NULL;
    int arr[]={1,2,3,4,5,6};
    head=CreateLinkedList(arr,0,6);

    //Print the values
    node* temp;
    temp=head;
    while(temp){
        cout<<temp->data<<" ";
        temp=temp->next;

    }

}