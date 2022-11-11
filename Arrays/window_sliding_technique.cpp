#include <iostream>
#include <limits.h>
using namespace std;

// Window Sliding Technique When window is not fixed
// Given an unsorted array of non negative integers. Find if there
// is a subarray with given sum
// 2-3 questions at the end of the video

// start and end index positions
bool isSubSum(int arr[], int n, int sum)
{
    int curr_sum = arr[0], s = 0;
    for (int e = 1; e < n; e++)
    {
        // Clean the previous window
        while (curr_sum > sum && s < e - 1)
        {
            curr_sum -= arr[s];
            s++;
        }
        if (curr_sum == sum)
            return true;
        if (e < n)
            curr_sum += arr[e];
    }
    return (curr_sum == sum);
}

// EFFICIENT SOLUTION
int maxConsequtiveSum(int arr[], int n, int k)
{
    int max_sum = 0, sum = 0;
    int i = 0;
    for (; i < k; i++)
    {
        sum += arr[i];
    }
    max_sum = sum;
    for (; i < n; i++)
    {
        sum += arr[i] - arr[i - k];
        if (sum > max_sum)
            max_sum = sum;
    }
    return max_sum;
}

// // NAIVE SOLUTION
// int maxConsequtiveSum(int arr[], int n, int k)
// {
//     int max_sum = INT_MIN;
//     for (int i = 0; i + k - 1 < n; i++)
//     {
//         int sum = 0;
//         for (int j = 0; j < k; j++)
//             sum += arr[i + j];
//         max_sum = max(sum, max_sum);
//     }
//     return max_sum;
// }

int main()
{
    int arr[] = {1, 8, 30, -5, 20, 7};
    int n = sizeof(arr) / sizeof(arr[0]);
    int k;
    cin >> k;
    cout << maxConsequtiveSum(arr, n, k) << endl;
    cout << (bool)isSubSum(arr, n, 45);
}