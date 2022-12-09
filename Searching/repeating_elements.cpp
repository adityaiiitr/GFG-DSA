#include <iostream>
using namespace std;

// BEST Approach

int findRepeating(int arr[], int n)
{
    int slow = arr[0], fast = arr[0];
    do
    {
        slow = arr[slow] + 1;
        fast = arr[arr[fast] + 1] + 1;
    } while (slow != fast);

    slow = arr[0];
    while (slow != fast)
    {
        slow = arr[slow] + 1;
        fast = arr[fast] + 1;
    }
    return slow - 1;
}

// // Super Naive Approach
// int elements(int arr[], int n)
// {
//     for (int i = 0; i < n; i++)
//         for (int j = i + 1; j < n; j++)
//             if (arr[i] == arr[j])
//                 return arr[i];
// }

// // Efficient Approach
// int elements(int arr[], int n)
// {
//     bool visited[n];
//     for (int i = 0; i < n; i++)
//     {
//         visited[i] = false;
//     }

//     for (int i = 0; i < n; i++)
//     {
//         if (visited[arr[i]])
//             return arr[i];
//         visited[arr[i]] = true;
//     }
// }

int main()
{
    int arr[] = {0, 4, 1, 3, 3, 2};
    int n = sizeof(arr) / sizeof(arr[0]);
    // cout << elements(arr, n);
    cout << findRepeating(arr, n);
}
