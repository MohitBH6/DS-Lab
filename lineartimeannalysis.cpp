#include <iostream>
#include <cstdlib>
#include <chrono>
using namespace std;
using namespace std::chrono;

int main()
{
    int i, number;
    long long size = 50LL;
    long long N = 10000000LL;

    cout << "Enter the number : ";
    cin >> number;

    while (size != 5000000000000LL)
    {
        // time at initialization
        auto start = std::chrono::high_resolution_clock::now();

        long long arr[size];

        for (i = 0; i < size; i++)
            arr[i] = rand() % N;

        for (i = 0; i < size; i++)
        {
            if (arr[i] == number)
            {
                cout << "number is present at " << i + 1 << "th position" << endl;
                break;
            }
        }

        // Finishing time
        auto end = std::chrono::high_resolution_clock::now();

        // Duration for execution
        std::chrono::duration<double, std::milli> elapsed = end - start;
        //duration 
        cout << "For Size = " << size << " Time = " << elapsed.count() << " milli seconds" << endl;

        size = size * 5;
    }

    return 0;
}
