#include <iostream>
#include <algorithm>
using namespace std;

// EFFICIENT APPROACH
void segregatePosNeg(int arr[], int n)
{
    int i = -1, j = n;
    while (true)
    {
        do
        {
            i++;
        } while (arr[i] < 0);
        do
        {
            j--;
        } while (arr[j] >= 0);
        if (i >= j)
            return;
        swap(arr[i], arr[j]);
    }
}

// NAIVE APPROACH
// void segregatePosNeg(int arr[], int n)
// {
//     int temp[n], i = 0;
//     for (int j = 0; j < n; j++)
//     {
//         if (arr[j] < 0)
//             temp[i++] = arr[j];
//     }
//     for (int j = 0; j < n; j++)
//     {
//         if (arr[j] >= 0)
//             temp[i++] = arr[j];
//     }
//     for (int j = 0; j < n; j++)
//     {
//         arr[j] = temp[j];
//     }
// }

int main()
{
    int arr[] = {1, 2, -1, 0, -3, 9};
    int n = sizeof(arr) / sizeof(arr[0]);
    segregatePosNeg(arr, n);
    for (int j = 0; j < n; j++)
    {
        cout << arr[j] << " ";
    }
}