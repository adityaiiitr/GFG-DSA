#include <iostream>
using namespace std;

// // LEFT ROTATE BY ONE
// void leftRotateOne(int arr[], int n)
// {
//     int temp = arr[0];
//     for (int i = 1; i < n; i++)
//     {
//         arr[i - 1] = arr[i];
//     }
//     arr[n - 1] = temp;
// }

// // LEFT ROTATE BY D
// void leftRotateD(int arr[], int n, int d)
// {
//     for (int i = 0; i < d; i++)
//     {
//         leftRotateOne(arr, n);
//     }
// }
//----------------------------------------------------
// // LEFT ROTATE O(n) - TIME &  O(d) - SPACE
// void leftRotate(int arr[], int n, int d)
// {
//     int temp[d];
//     for (int i = 0; i < d; i++)
//     {
//         temp[i] = arr[i];
//     }
//     for (int i = d; i < n; i++)
//     {
//         arr[i - d] = arr[i];
//     }
//     for (int i = 0; i < d; i++)
//     {
//         arr[n - d + i] = temp[i];
//     }
// }
//----------------------------------------------------
// LEFT ROTATE O(n) - TIME &  O(1) - SPACE
void reverse(int arr[], int low, int high)
{
    while (low < high)
    {
        swap(arr[low], arr[high]);
        low++;
        high--;
    }
}
void leftRotate(int arr[], int n, int d)
{
    reverse(arr, 0, d - 1);
    reverse(arr, d, n - 1);
    reverse(arr, 0, n - 1);
}
//----------------------------------------------------
int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    int d;
    cin >> d;

    // leftRotateOne(arr, n);
    // leftRotateD(arr, n, d);
    leftRotate(arr, n, d);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}