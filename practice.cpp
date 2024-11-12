//Using array
#include<iostream>
using namespace std;
class Queue{
    public:
    int *arr;
    int front,rear,size;
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
    void push(int x){
        if(IsEmpty()){
            front=rear=0;
            arr[0]=x;
            cout<<"pushed "<<x<<" into the Queue :"<<endl;
        }
        else if(IsFull()){
            cout<<"Queue is overflow : "<<endl;
            return ;
        }
        else{
            rear=rear+1;
            arr[rear]=x;
            cout<<"pushed "<<x<<" into the Queue :"<<endl;
        }
    }

    void pop(){
        if(IsEmpty()){
            cout<<"Queue is underflow :"<<endl;
            return ;
        }
        else{
            if(front==rear){
                front=rear=-1;
            }
            else{
                front=front+1;
                cout<<"popped "<<arr[front]<<" from yhe Queue : "<<endl;
            }
        }
    }
    
    int start(){
        if(IsEmpty()){
            cout<<"Queue is empty : "<<endl;
            return -1;
        }
        else{
            return arr[front];
        }
    }
};
int main(){
    Queue q(5);
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);
    q.pop();
    cout<<q.IsEmpty();
    return 0;
}