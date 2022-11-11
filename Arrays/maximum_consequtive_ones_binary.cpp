#include <iostream>
using namespace std;

// // NAIVE SOLUTION
// int maxConsequtiveOnes(int arr[], int n)
// {
//     int res = 0;
//     for (int i = 0; i < n; i++)
//     {
//         int curr = 0;
//         for (int j = i; j < n; j++)
//         {
//             if (arr[j] == 1)
//                 curr++;
//             else
//                 break;
//         }
//         res = max(res, curr);
//     }
//     return res;
// }

// EFFICIENT SOLUTION
int maxConsOnes(int arr[], int n)
{
    int res = 0;
    int curr = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 1)
        {
            curr++;
            res = max(res, curr);
        }
        else
        {
            curr = 0;
        }
    }
    return res;
}
int main()
{
    int arr[] = {1, 1, 1, 1, 0, 1, 1, 1, 0, 1};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << maxConsOnes(arr, n);
}