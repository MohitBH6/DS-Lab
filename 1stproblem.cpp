#include <iostream>
using namespace std;

int main() {
    int a, b, c;
    int arr[10];

    cout << "Enter elements: ";
    for (int i = 0; i < 10; i++) {
        cin >> arr[i];
    }
//Loops for finding triplets

    for (int j = 0; j < 10; j++) {
        for (int k = j + 1; k < 10; k++) {
            for (int l = k + 1; l < 10; l++) { 
                a = arr[j];
                b = arr[k];
                c = arr[l];
                if (a + b == c) {
                    cout << "a: " << a << ", b: " << b << ", c: " << c << endl;
                }
            }
        }
    }

    return 0;
}
