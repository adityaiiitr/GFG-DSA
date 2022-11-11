#include <iostream>
using namespace std;

int maxDiff(int arr[], int n)
{
    int res = arr[1] - arr[0];
    int minVal = arr[0];

    for (int i = 1; i < n; i++)
    {
        res = max(res, arr[i] - minVal);
        minVal = min(minVal, arr[i]);
    }
    return res;
}

int main()
{
    int arr[] = {30, 10, 8, 2};
    int n = sizeof(arr) / sizeof(arr[0]);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << "\n"
         << maxDiff(arr, n);
}
