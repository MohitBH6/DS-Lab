#include<iostream>
using namespace std;

class stack{
      int *arr;
      int size;
      int top;
      public:
      stack(int s){
        size=s;
        top=-1;
        arr=new int[s];
      }
      //For Inserting
      void push(int value){
        if(top==size-1){
            cout<<"Stack Overflow "<<endl;
            return;
        }
        else{
            top++;
            arr[top]=value;
            cout<<"pushed "<<value<<" into the stack "<<endl;
        }
      }
      //For Deleting
      void pop(){
        if(top==-1){
            cout<<"Stack Underflow "<<endl;
            return ;
        }
        else{
            cout<<"popped "<<arr[top]<<" from the stack"<<endl;
            top--;
        }
      }
      //peak/top nikalna
      int peak(){
       if(top==-1){
        cout<<"stack is empty "<<endl;
        return -1;
       }
       else{
        cout<<"Top/Peak is "<<arr[top]<<endl;
       }
      }
      //Is empty 
      bool isempty(){
        if(top==-1){
            return 1;
        }
        else{
            return 0;
                    }
      }
      //size
      int issize(){
        cout<<"size is :"<<top+1<<endl;
      }

};
int main(){
    stack s(5);
    s.push(5);
    s.push(6);
    s.push(7);
    s.push(8);
    s.push(2);
    s.push(9);
    s.pop();
    s.pop();

    s.isempty();
    s.issize();
     cout<<s.isempty();
     return 0;
      }