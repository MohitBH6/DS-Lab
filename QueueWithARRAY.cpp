#include<iostream>
using namespace std;
//Queue Implementation using Array
 class Queue{
    int *arr;
    int front,rear,size;
    public:
    Queue(int n){
        arr=new int[n];
        front=-1;
        rear=-1;
        size=n;
    }
  bool IsEmpty(){
   return front==-1;
 }
 bool IsFull(){
    return rear==size-1;
 }

 //Push element into Queue
 void push(int x){
    //Empty
    if(IsEmpty()){
        cout<<"pushed "<<x<<" into the Queue "<<endl;
        front=rear=0;
        arr[0]=x;
    }
    //Full
    else if(IsFull()){
        cout<<"Queue is Overflow : "<<endl;
        return;
    }
    //Insert
    else{
        rear=rear+1;
        arr[rear]=x;
        cout<<"Pushed "<<x<<" into the Queue "<<endl;
    }
 }

 //Pop element
 void pop( ){
    //empty
    if(IsEmpty()){
        cout<<"Queue is Underflow : "<<endl;
        return ;
    }
    else{
        if(front==rear){
            front=rear=-1;
        }
        else{
            cout<<"Popped "<<arr[front]<< " from the Queue "<<endl;
            front=front+1;
        }
    }
 }
 int start(){
    if(IsEmpty()){
        cout<<"Queue is Empty "<<endl;
        return -1;
    }
    else{
        return arr[front];
    }
 }

 };
 int main(){
    Queue q(5);
    q.push(12);
    q.push(13);
    q.push(14);
    q.pop();
    q.start();
  cout<<q.start()<<endl;
 }