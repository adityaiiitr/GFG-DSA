
// EFFICIENT APPROACH
#include <iostream>
using namespace std;

int secondLargest(int arr[], int n)
{
    int largest = 0;
    int res = -1;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > arr[largest])
        {
            res = largest;
            largest = i;
        }
        else if (arr[i] != arr[largest])
        {
            if (res == -1 || arr[i] > arr[res])
                res = i;
        }
    }
    return res;
}

int main()
{
    int arr[] = {10, 20, 30, 40};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << arr[secondLargest(arr, n)];
    return 0;
}

// // NAIVE APPROCH
// #include <iostream>
// using namespace std;

// int getLargest(int arr[], int n)
// {
//     int largest = 0;
//     for (int i = 0; i < n; i++)
//     {
//         if (arr[i] > arr[largest])
//         {
//             largest = i;
//         }
//     }
//     return largest;
// }

// int secondLargest(int arr[], int n)
// {

//     int largest = getLargest(arr, n);
//     int res = -1;
//
//     for (int i = 0; i < n; i++)
//     {
//         if (arr[i] != arr[largest])
//         {
//             if (res == -1)
//                 res = i;
//             else if (arr[i] > arr[res])
//                 res = i;
//         }
//     }
//     return res;
// }

// int main()
// {
//     int arr[] = {10, 20, 30, 40};
//     int n = sizeof(arr) / sizeof(arr[0]);
//     cout << arr[secondLargest(arr, n)];
//     return 0;
// }