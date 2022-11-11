
// CODE IS NOT COMPLETED AND NOT STUDIED YET

#include <iostream>
using namespace std;

int main()
{
    int arr[] = {10, 10, 10, 25, 30, 30};
    int n = sizeof(arr) / sizeof(arr[0]);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << "\n";

    return 0;
}