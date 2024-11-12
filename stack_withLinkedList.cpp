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
class stack{
    node* top;
    int size;
    public:
    stack(){
        top=NULL;
        size=0;
    }
    //for push/inserting 

    void push(int value){
         node* temp=new node(value);
        if(temp==NULL){
            cout<<"Stack Overflow "<<endl;
            return;
        }
       else{
        temp->next=top;
        top=temp;
        size++;
        cout<<"pushed "<<value<<" into the stack "<<endl;
       }
    }
    //Pop/Deleting 
      void pop(){
        if(top==NULL){
            cout<<"Stack Underflow "<<endl;
        }
        else{
            node* temp=top;
            cout<<"popped "<<top->data<< " from the stack"<<endl; 
            top=top->next;
             delete temp;
            size--;
        }
    }
    //peak 
    int peak(){
        if(top==NULL){
            cout<<"stack is empty "<<endl;
            return -1;
        }
        else{
            return top->data;
        }
    }
    //IsEmpty
    bool isempty(){
        return top==NULL;
    }
    //Size
    int issize(){
      return size;
    }
};
int main(){
    stack s;
    s.push(6);
    s.push(16);
    s.push(62);
    s.push(86);
    s.pop();
    
   cout<<s.issize()<<endl;
   cout<<"peak is : "<< s.peak()<<endl;
    cout<<s.isempty();
    return 0;
}