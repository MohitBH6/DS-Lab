#include <iostream>
#include <cstdlib>
#include <chrono>
#include <algorithm>  // for std::sort

using namespace std;
using namespace std::chrono;

int main()
{
    int number;
    long long size = 50LL;
    long long N = 10000000LL;

    cout << "Enter the number you are looking for: ";
    cin >> number;

    while (size != 5000000000000LL)
    {
        // Time at initialization
        auto start = std::chrono::high_resolution_clock::now();

        long long arr[size];

        // Initialize the array with random numbers
        for (long long i = 0; i < size; i++)
            arr[i] = rand() % N;

        // Sort the array
        std::sort(arr, arr + size);

        // Perform binary search
        bool found = false;
        long long low = 0, high = size - 1;
        while (low <= high)
        {
            long long mid = low + (high - low) / 2;
            if (arr[mid] == number)
            {
                cout << "Number is present at " << mid + 1 << "th position" << endl;
                found = true;
                break;
            }
            else if (arr[mid] < number)
            {
                low = mid + 1;
            }
            else
            {
                high = mid - 1;
            }
        }

        if (!found)
        {
            cout << "Number not found in the array" << endl;
        }

        // Finishing time
        auto end = std::chrono::high_resolution_clock::now();

        // Duration for execution
        std::chrono::duration<double, std::milli> elapsed = end - start;
        // Duration
        cout << "For Size = " << size << " Time = " << elapsed.count() << " milliseconds" << endl;

        size = size * 5;
    }

    return 0;
}
