#include <iostream>
using namespace std;

void leaders(int arr[], int n)
{
    int curr_leader = arr[n - 1];
    cout << arr[n - 1] << " ";
    for (int i = n - 2; i >= 0; i--)
    {

        if (arr[i] > curr_leader)
        {
            curr_leader = arr[i];
            cout << arr[i] << " ";
        }
    }
}

int main()
{
    int arr[] = {7, 10, 4, 10, 6, 5, 2};
    int n = sizeof(arr) / sizeof(arr[0]);
    leaders(arr, n);
    // for (int i = 0; i < n; i++)
    // {
    //     cout << arr[i] << " ";
    // }
}