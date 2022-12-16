#include <iostream>
// #include <algorithm>
using namespace std;

// Efficient Approach
// Quick Select Algorithm
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

int kthSmallest(int arr[], int n, int k)
{
    int l = 0, r = n - 1;
    while (l <= r)
    {
        int p = lpartition(arr, l, r); // Lomuto Partition
        if (p == k - 1)
            return arr[p];
        else if (p > k - 1)
            r = p - 1;
        else
            l = p + 1;
    }
}

// // Naive Approach
// int kthSmallest(int arr[], int n, int k)
// {
//     sort(arr, arr + n);
//     return arr[k - 1];
// }

int main()
{
    int arr[] = {2, 86, 2, 55, 90, 44, 54, 124, 06};
    int n = sizeof(arr) / sizeof(arr[0]);
    int k = 3; // 3rd Smallest Element
    cout << kthSmallest(arr, n, k);
}