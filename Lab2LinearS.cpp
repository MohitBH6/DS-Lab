#include <iostream>
using namespace std;

int linearSearch(int arr[], int n, int target) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == target) {
            return i;       // Return the index where the target is found
        }
    }
    return -1;      // Return -1 if the target is not found
}

int main() {
    int arr[] = { 2, 3, 4, 10, 40 };
    int n = sizeof(arr) / sizeof(arr[0]);
    int target = 10;

    int index = linearSearch(arr, n, target);

    if (index != -1) {
        cout << "Element is present at index " << index << endl;
    } else {
        cout << "Element is not present in array" << endl;
    }

    return 0;
}