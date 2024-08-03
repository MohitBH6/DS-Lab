//Problem -> Find missing number in a consecutive list
#include<iostream>
using namespace std;
int main(){
    int arr[10];
    cout<<"Enter conjuctive Numbers"<<endl;
    for(int i=0;i<10;i++){
        cin>>arr[i];
    }
    
    for(int j=0;j<10;j++){
            if(arr[j+1]!=arr[j]+1){
                cout<<"Missing Number is "<<j;
            }
        
    }
    return 0;
}
