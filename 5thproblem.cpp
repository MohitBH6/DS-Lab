#include <iostream>
using namespace std;
int main()
{
    int a[5];
    int b[5];
    int ans = 1;
    int i;
    cout << "enter numbers of array a : " << endl;
    for (int i = 0; i < 5; i++)
    {
        cin >> a[i];
    }
        cout << "Elements of array a : " <<endl;
        for(int i=0;i<5;i++)
        {
            cout<<a[i]<<endl;
        }
      cout<<endl;
    for (int i = 0; i < 5; i++)
    {
        ans = ans * a[i];
    }
    for (int i=0; i < 5; i++)
    {
        b[i] = ans / a[i];
    }
    cout << "Elements of array b : " <<  endl;
    for(int i=0;i<5;i++)
    {
        cout<<b[i]<<endl;
    }
    return 0;
}