#include<iostream>
using namespace std;
int bs(int arr[],int n,int k)
{
    int low=0;
    int high=n-1;
    int mid=(low+high)/2;
    int ans=-1;
    while (low<=high)
    {
        if(arr[mid]==k){
           ans= mid;
           high=mid-1;
        }
        else if (k<arr[mid])
        {
            high=mid-1;
        }
        else{
            low=mid+1;
        }
        mid=(low+high)/2;
        
    }
    return ans;
    
}
int main()
{
    int k;
    int arr[6]={2,4,6,8,9,14};
    int r=bs(arr,6,9);
    cout<<"K is at index: "<<r;
    
    return 0;
}