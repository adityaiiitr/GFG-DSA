#include <iostream>
using namespace std;

int lpartition(int arr[], int l, int h)
{
    int pivot = arr[h];
    int i = l - 1;
    for (int j = l; j <= h - 1; j++)
    {
        if (arr[j] < pivot)
        {
            i++;
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[i + 1], arr[h]);
    return i + 1;
}

void quickSort(int arr[], int l, int h)
{
    if (l < h)
    {
        int p = lpartition(arr, l, h);
        quickSort(arr, l, p - 1);
        quickSort(arr, p + 1, h);
    }
}

int main()
{
    int arr[] = {2, 86, 2, 55, 90, 44, 54, 124, 06};
    int n = sizeof(arr) / sizeof(arr[0]);
    quickSort(arr, 0, n - 1);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}