#include <iostream>
using namespace std;
class node
{
public:
    int data;
    node *next;
    node *prev;

    node(int value)
    {
        data = value;
        next = NULL;
        prev = NULL;
    }
};
// Insert at Beginning
void Insertatbeginning(node *&head, int data)
{
    // creating a new node
    node *temp = new node(data);

    // if linkedlist doesnot present
    if (head == NULL)
    {
        head = temp;
        return;
    }
    // if linked list present
    temp->next = head;
    head->prev = temp;
    head = temp;
}
// Insert at End
void Insertatend(node *&head, int data)
{
    node *temp = new node(data);
    if (head == NULL)
    {
        head = temp;
        return;
    }
    node *tail = head;
    while (tail->next != NULL)
    {
        tail = tail->next;
    }
    tail->next = temp;
    temp->prev = tail;
}

// Insertion at a particular position
void Insertionatpos(node* &head,int pos,int value){
    //insertion at start (pos =0)
    if(pos==1){
        //If LinkedList doesn't exist
        if(head==NULL){
           head=new node(value);
        }
        //If linkedList exist
        else{
            node* temp=new node(value);
            temp->next=head;
            head->prev=temp;
            head=temp;
        }
    }
       
       //Insertion at middle or end
     else{
        node* curr=head; 
        while(--pos){             //Go to node after which i have to insert
            curr=curr->next;
        }
        //insert at end
        if(curr->next==NULL){
            node* temp=new node(value);
            curr->next=temp;
            temp->prev=curr;
        }
       //insert at middle
       else{
        node* temp=new node(value);
        temp->next=curr->next;
        temp->prev=curr;
        curr->next=temp;
        curr->next->prev=temp;
       }
       }
}

// Print list Forward
void Printlist(node *head)
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
node *CreateLinkedList(int arr[], int index, int size)
{
    if (index == size)
    {
        return NULL;
    }
    node *temp;
    temp = new node(arr[index]);
    temp->next = CreateLinkedList(arr, index + 1, size);
    return temp;
}

int main()
{
    node* head=NULL;
    int arr[5]={11,12,13,14,15};
    head=CreateLinkedList(arr,0,5);
    Printlist(head);

    //  Insertatbeginning(head,30);
    // cout<<"After inserting 30 at start: "<<endl;
    // Printlist(head);

    // Insertatend(head,50);
    // cout<<"After inserting 50 at end :"<<endl;
    // Printlist(head);

   Insertionatpos(head,1 ,56);
   cout<<"after insertint at positin : "<<endl;
   Printlist(head);
    
}
