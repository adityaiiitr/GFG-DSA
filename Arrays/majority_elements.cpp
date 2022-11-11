#include <iostream>
using namespace std;

// EFFICIENT SOLUTION
int findMajority(int arr[], int n)
{
    int res = 0, count = 1;
    for (int i = 1; i < n; i++)
    {
        if (arr[res] == arr[i])
            count++;
        else
            count--;
        if (count == 0)
        {
            res = i;
            count = 1;
        }
    }
    count = 0;
    for (int i = 1; i < n; i++)
    {
        if (arr[res] == arr[i])
            count++;
    }
    if (count <= n / 2) // Checks if it is majority or not
        res = -1;
    return res;
}

// // NAIVE SOLUTION
// int findMajority(int arr[], int n)
// {
//     for (int i = 0; i < n; i++)
//     {
//         int count = 1;
//         for (int j = i + 1; j < n; j++)
//         {
//             if (arr[i] == arr[j])
//                 count++;
//             if (count > n / 2)
//                 return i;
//         }
//     }
//     return -1;
// }

int main()
{
    int arr[] = {8, 7, 6, 8, 6, 6};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << arr[findMajority(arr, n)];
}