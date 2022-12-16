#include <iostream>
using namespace std;

void countingSort(int arr[], int n, int exp)
{
    int k = 10;
    int count[k];
    for (int i = 0; i < k; i++)
        count[i] = 0;

    for (int i = 0; i < n; i++)
        count[(arr[i] / exp) % 10]++;

    for (int i = 1; i < k; i++)
        count[i] = count[i - 1] + count[i];

    int output[n];
    for (int i = n - 1; i >= 0; i--)
    {
        output[count[(arr[i] / exp) % 10] - 1] = arr[i];
        count[(arr[i] / exp) % 10]--;
    }
    for (int i = 0; i < n; i++)
        arr[i] = output[i];
}

void radixSort(int arr[], int n)
{
    int mx = arr[0];
    for (int i = 1; i < n; i++)
        if (arr[i] > mx)
            mx = arr[i];

    for (int exp = 1; mx / exp > 0; exp = exp * 10)
    {
        countingSort(arr, n, exp);
    }
}

int main()
{
    int arr[] = {3, 3, 2, 1, 2, 3, 0};
    int n = sizeof(arr) / sizeof(arr[0]);
    radixSort(arr, n);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}