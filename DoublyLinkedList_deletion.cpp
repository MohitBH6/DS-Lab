#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node* next;
    node* prev;
    node(int value){
        data=value;
        next=NULL;
        prev=NULL;
    }
};

// Print list Forward
void Printlist(node* head)
{
    node *temp = head;
    cout << "Your LInkedList : " << endl;
    while(temp!=NULL){
    cout << temp->data<<endl;
    temp = temp->next;
    }
    cout << endl;
}

// Create LInkedlist
node *CreateLinkedList(int arr[], int index, int size,node* prev=NULL)
{
    if (index == size)
    {
        return NULL;
    }
    node *temp;
    temp = new node(arr[index]);
    temp->prev=prev;
    temp->next = CreateLinkedList(arr, index + 1, size,temp);
    return temp;
}
//delete node from start
void Deleteatstart(node *&head){
    if(head!=NULL){
        //if only one node is present
    if(head->next==NULL){
        delete head;
        head=NULL;
    }
    //if more than one node exist
    else{
        node* temp=head;
        head=head->next;
        delete temp;
        head->prev=NULL;
    }
    }
}
//delete node from end
void Deleteatend(node*&head){
    if(head->next==NULL){         //if only one node exist
        delete head;
        head=NULL;
    }
    else{
        node* curr=head;
        while(curr->next!=NULL){
            curr=curr->next;
        }
        curr->prev->next=NULL;
        delete curr;
    }
}

//delete from a particular position
 void Deleteatpos(node*&head,int pos){
    //if position at start
    if(pos==1){
        //if only one node exist
        if(head->next==NULL){
            delete head;
            head=NULL;
        }
        //if more than 1 node exist 
        else{
            node*temp=head;
            head=head->next;
            delete temp;
            head->prev=NULL;
        }
    }
    //if position either at end or at middle
    else{
        node* curr=head;
        while(--pos){
            curr=curr->next;
        }
        //if pos at end
        if(curr->next==NULL){
            curr->prev->next=NULL;
            delete curr;
        }
        //if pos at middle anywhere
        else{
            curr->prev->next=curr->next;
            curr->next->prev=curr->prev;
            delete curr;
        }
    } 
 }

int main(){
     node* head=NULL;
    int arr[]={1,2,3,4,5};
   head= CreateLinkedList(arr,0,5);
   Printlist(head);
  // Deleteatstart(head);
   //cout<<"After deletion a node fom start:"<<endl;
   //Printlist(head);
//    Deleteatend(head);
//    cout<<"After deletion a node from end :"<<endl;
//    Printlist(head);

Deleteatpos(head,5);
cout<<"After deleting node from this position :"<<endl;
Printlist(head);
return 0;

}