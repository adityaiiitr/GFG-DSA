#include <iostream>
#include <algorithm>
using namespace std;

// Efficient Approach
void merge(int arr[], int brr[], int n, int m)
{
    int c[m + n];
    int i = 0, j = 0, k = 0;
    while (i < n && j < m)
    {
        if (arr[i] < brr[j])
            c[k++] = arr[i++];
        else
            c[k++] = brr[j++];
    }
    while (j < m)
    {
        c[k++] = brr[j++];
    }
    while (i < n)
    {
        c[k++] = arr[i++];
    }
    for (int i = 0; i < m + n; i++)
    {
        cout << c[i] << " ";
    }
}

// // Naive Approach
// void merge(int arr[], int brr[], int m, int n)
// {
//     int c[m + n];
//     for (int i = 0; i < n; i++)
//         c[i] = arr[i];
//     for (int j = 0; j < m; j++)
//         c[n + j] = brr[j];
//     sort(c, c + m + n);
// for (int i = 0; i < m + n; i++)
// {
//     cout << c[i] << " ";
// }
// }

int main()
{
    int arr[] = {1, 3, 5, 7, 9};
    int brr[] = {2, 6, 8};
    int n = sizeof(arr) / sizeof(arr[0]);
    int m = sizeof(brr) / sizeof(brr[0]);
    merge(arr, brr, n, m);
}