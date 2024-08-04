//Problem->Fint a to the power n in n-1 iteration
#include<iostream>
using namespace std;
int power(int a,int n){
    if(n==0)
    {
        return 1;     //Because anything to the power 0 means 1
    }
    int ans=a;
    for(int i=1;i<n;i++)
    {
        ans=ans*a;
    }
    return ans;
}
int main(){
    int a,n,ans;
    cout<<"Enter Base(a) : "<<endl;
    cin>>a;
    cout<<"Enter Poewer(n) : "<<endl;
    cin>>n;
    ans=power(a,n);
    cout<<a<<" to the power "<<n<<" is : "<<ans;
    return 0;
}