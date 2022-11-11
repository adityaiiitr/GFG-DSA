#include <iostream>
using namespace std;

// // EFFICIENT SOLUTION
void moveToEnd(int arr[], int n)
{
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] != 0)
        {
            swap(arr[i], arr[count]);
            count++;
        }
    }
}

// NAIVE SOLUTION
// void moveToEnd(int arr[], int n)
// {
//     for (int i = 0; i < n; i++)
//     {
//         if (arr[i] == 0)
//             for (int j = i + 1; j < n; j++)
//             {
//                 if (arr[j] != 0)
//                     swap(arr[i], arr[j]);
//             }
//     }
// }

int main()
{
    int arr[] = {10, 0, 12, 0, 8, 0, 9, 0};
    int n = sizeof(arr) / sizeof(arr[0]);
    moveToEnd(arr, n);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}