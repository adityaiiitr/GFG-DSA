// Code Not Well Written --> also Not Working
#include <iostream>
using namespace std;

int partition(int arr[], int l, int h)
{
    int pivot = arr[h];
    int temp[h - l + 1], index = 0;
    for (int i = l; i <= h; i++)
    {
        if (arr[i] < pivot)
        {
            temp[index] = arr[i];
            index++;
        }
    }

    int position = index;  // Pivot Position
    temp[index++] = pivot; // Placing Pivot to its original position

    for (int i = l; i <= h; i++)
    {
        if (arr[i] > pivot)
        {
            temp[index] = arr[i];
            index++;
        }
    }

    for (int i = l; i <= h; i++)
    {
        arr[i] = temp[i - l];
    }
    for (int i = 0; i < 9; i++)
    {
        cout << arr[i] << " ";
    }
    return position; // returning pivot position
}

void quickSort(int arr[], int l, int h)
{
    if (l < h)
    {
        int p = partition(arr, l, h);
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