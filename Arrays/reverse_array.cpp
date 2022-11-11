#include <iostream>
using namespace std;

void reverse(int arr[], int n)
{
    int low = 0, high = n - 1;
    while (low < high)
    {
        // Swapping
        arr[high] = arr[high] ^ arr[low];
        arr[low] = arr[high] ^ arr[low];
        arr[high] = arr[high] ^ arr[low];
        low++;
        high--;
    }
}

int main()
{
    int arr[] = {10, 20, 30, 40, 50};
    int n = sizeof(arr) / sizeof(arr[0]);

    reverse(arr, n);
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
}