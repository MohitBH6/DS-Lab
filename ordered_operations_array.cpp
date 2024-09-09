#include<iostream>
using namespace std;
#include<vector>
//function for binary search 
int bs(const vector<int>&arr,int target){
       int start=0;
       int end=arr.size()-1;
       int mid=(start+end)/2;
       while(start<=end){
        if(arr[mid]==target){
            return mid;
        }
        else if(arr[mid]<target){
             start=mid+1;
        }
        else{
            end=mid-1;
        }

mid=start+(end-start)/2;  
       }
         
return start; 
}
//function for insert a number
 void insert( vector<int>& arr, int target)
{
    int pos = bs(arr, target);
    arr.insert(arr.begin() + pos, target);
}

//Function for delete the number if this exist in the array
void deleteElement(vector<int>& arr, int x) {
    int pos = bs(arr, x);
    if (pos < arr.size() && arr[pos] == x)
        arr.erase(arr.begin() + pos);
}

//Function for update a number 
void update(vector<int>& arr, int oldval, int newval) {
    deleteElement(arr, oldval);
    insert(arr, newval);
}


// Function to print the array
void printArray(const vector<int>& arr) {
    for (int x : arr) {
        cout << x << " ";
    }
    cout << endl;
}

int main()
{
    vector<int>arr;
    int n;
   cout<<"enter the ordered ordered array : "<<endl;
    // Taking array  from the user
    cout << "Enter the number of elements in the array: ";
    cin >> n;
    
    cout << "Enter " << n << " elements (sorted): ";
    for (int i = 0; i < n; i++) {
        int temp;
        cin >> temp;
        arr.push_back(temp);
    }
    //Printing the original array
    cout<<"Original Array: ";
    printArray(arr);

    //Operation: Insert
    cout<<"After Inserting 7: ";
        insert(arr,7);
        printArray(arr);
        
    //Operation: Delete
    cout<<"After Deleting the 5: ";
    deleteElement(arr,5);
    printArray(arr);

    //Operation: Update 
    cout<<"After Updating 4: ";
    update(arr,4,18);
    printArray(arr);

    //Operation: Search
    int pos = bs(arr, 8);
    if (pos < arr.size() && arr[pos] == 8)
        cout << "8 found at index: " << pos << endl;
    else
        cout << "8 not found" << endl;

    return 0;
}