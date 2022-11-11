#include <iostream>
using namespace std;

// EFFICIENT SOLUTION
int normalMaxSum(int arr[], int n)
{
    int res = arr[0], maxEnding = arr[0];
    for (int i = 1; i < n; i++)
    {
        maxEnding = max(arr[i], maxEnding + arr[i]);
        res = max(res, maxEnding);
    }
    return res;
}
int overallMaxSum(int arr[], int n)
{
    int max_normal = normalMaxSum(arr, n);
    if (max_normal < 0)
        return max_normal;
    int arr_sum = 0;
    for (int i = 0; i < n; i++)
    {
        arr_sum += arr[i];
        arr[i] = -arr[i];
    }
    int max_circular = arr_sum + normalMaxSum(arr, n);
    return max(max_normal, max_circular);
}

// // NAIVE SOLUTION
// int maxCircularSum(int arr[], int n)
// {
//     int res = arr[0];
//     for (int i = 0; i < n; i++)
//     {
//         int curr_max = arr[i];
//         int curr_sum = arr[i];
//         for (int j = 1; j < n; j++)
//         {
//             int index = (i + j) % n;
//             curr_sum += arr[index];
//             curr_max = max(curr_sum, curr_max);
//         }
//         res = max(res, curr_max);
//     }
//     return res;
// }

int main()
{
    int arr[] = {5, -2, 3, 4};
    int n = sizeof(arr) / sizeof(arr[0]);
    // cout << maxCircularSum(arr, n);
    cout << overallMaxSum(arr, n);
}