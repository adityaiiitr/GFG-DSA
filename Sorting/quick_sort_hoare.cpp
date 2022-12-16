#include <iostream>
using namespace std;

int hpartition(int arr[], int l, int h)
{
    int pivot = arr[l];
    int i = l - 1, j = h + 1;
    while (true)
    {
        do
        {
            i++;
        } while (arr[i] < pivot);

        do
        {
            j--;
        } while (arr[j] > pivot);

        if (i >= j)
            return j;
        swap(arr[i], arr[j]);
    }
}

void quickSort(int arr[], int l, int h)
{
    if (l < h)
    {
        int p = hpartition(arr, l, h);
        quickSort(arr, l, p);
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