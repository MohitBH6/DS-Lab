// Problem -> No of bounce 
#include<iostream>
using namespace std;
int main(){
    int v;        //dropping velocity
    int count=0;   //bounce count
    cout<<"Enter the velocity of ball at thye time of dropping "<<endl;
    cin>>v;
    while(v!=0){
        count=count+1;
        v=v/2;
    }
    cout<<"No of Bounce : "<<count;
    return 0;
}