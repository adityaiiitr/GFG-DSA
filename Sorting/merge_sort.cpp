// CODE NOT WORKING (GFG CODE is WRONG)

#include <iostream>
using namespace std;

void merge(int arr[], int low, int mid, int high)
{
    int n1 = mid - low + 1, n2 = high - mid;
    int left[n1], right[n2];
    for (int i = 0; i < n1; i++)
        left[i] = arr[low + i];
    for (int i = 0; i < n2; i++)
        right[i] = arr[mid + 1 + i];

    int i = 0, j = 0, k = 0;
    while (i < n1 && j < n2)
    {
        if (left[i] <= right[j])
            arr[k++] = left[i++];
        else
            arr[k++] = right[j++];
    }
    while (i < n1)
        arr[k++] = left[i++];

    while (j < n2)
        arr[k++] = right[j++];

    // for (int i = 0; i < high; i++)
    // {
    //     cout << arr[i] << " ";
    // }
    // cout << endl;
}

void mergeSort(int arr[], int l, int r)
{
    if (r > l)
    {
        int m = l + (r - l) / 2;
        mergeSort(arr, l, m);
        mergeSort(arr, m + 1, r);
        merge(arr, l, m, r);
    }
}

int main()
{
    int arr[] = {2, 86, 2, 55, 90, 44, 54, 124, 06};
    int n = sizeof(arr) / sizeof(arr[0]);
    mergeSort(arr, 0, n);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}