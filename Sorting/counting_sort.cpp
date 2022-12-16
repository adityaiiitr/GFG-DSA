#include <iostream>
using namespace std;

void countingSort(int arr[], int n, int k)
{
    int count[k];
    for (int i = 0; i < k; i++)
        count[i] = 0;

    // for (int i = 0; i < k; i++)
    // {
    //     cout << count[i] << " ";
    // }
    // cout << "\n";

    for (int i = 0; i < n; i++)
        count[arr[i]]++;

    // for (int i = 0; i < k; i++)
    // {
    //     cout << count[i] << " ";
    // }
    // cout << "\n";

    for (int i = 1; i < k; i++)
        count[i] = count[i - 1] + count[i];

    // for (int i = 0; i < k; i++)
    // {
    //     cout << count[i] << " ";
    // }
    // cout << "\n";

    int output[n];
    for (int i = n - 1; i >= 0; i--)
    {
        output[count[arr[i]] - 1] = arr[i];
        count[arr[i]]--;
    }
    for (int i = 0; i < n; i++)
        arr[i] = output[i];
}

int main()
{
    int arr[] = {3, 3, 2, 1, 2, 3, 0};
    int n = sizeof(arr) / sizeof(arr[0]);
    countingSort(arr, n, 4);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}