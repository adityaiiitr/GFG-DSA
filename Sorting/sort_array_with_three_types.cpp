#include <iostream>
using namespace std;

// // EFFICIENT APPROACH
void sort(int arr[], int n)
{
    int low = 0, hi = n - 1, mid = 0;
    while (mid <= hi)
    {
        if (arr[mid] == 0)
            swap(arr[mid++], arr[low++]);
        else if (arr[mid] == 1)
            mid++;
        else
            swap(arr[mid], arr[hi--]);
    }
}

// NAIVE APPROACH
// void segregate(int arr[], int n)
// {
//     int temp[n], i = 0;
//     for (int j = 0; j < n; j++)
//     {
//         if (arr[j] == 0)
//             temp[i++] = arr[j];
//     }
//     for (int j = 0; j < n; j++)
//     {
//         if (arr[j] == 1)
//             temp[i++] = arr[j];
//     }
//     for (int j = 0; j < n; j++)
//     {
//         if (arr[j] == 2)
//             temp[i++] = arr[j];
//     }
//     for (int j = 0; j < n; j++)
//     {
//         arr[j] = temp[j];
//     }
// }

int main()
{
    int arr[] = {0, 1, 2, 2, 1, 2, 0, 0, 1, 2, 0};
    int n = sizeof(arr) / sizeof(arr[0]);
    // segregate(arr, n);
    sort(arr, n);
    for (int j = 0; j < n; j++)
    {
        cout << arr[j] << " ";
    }
}