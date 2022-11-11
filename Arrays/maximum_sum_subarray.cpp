#include <iostream>
using namespace std;

// EFFICIENT SOLUTION
// int maxSum(int arr[], int n)
// {
//     int res = arr[0], res_final = arr[0];
//     for (int i = 1; i < n; i++)
//     {
//         res = max(arr[i] + res, arr[i]);
//         res_final = max(res, res_final);
//     }
//     return res;
// }

// // NAIVE SOLUTION
int maxSum(int arr[], int n)
{
    int res = 0;
    for (int i = 0; i < n; i++)
    {
        int curr = 0;
        for (int j = i; j < n; j++)
        {
            curr = curr + arr[j];
            res = max(res, curr);
        }
    }
    return res;
}

int main()
{
    // int arr[] = {10, 0, 12, 0, 8, 0, 9, 0};
    // int arr[] = {1, -2, 3, -1, 2};
    int arr[] = {-3,
                 8,
                 -2,
                 4,
                 -5,
                 6};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << maxSum(arr, n);
}