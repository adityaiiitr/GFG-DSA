#include <iostream>
using namespace std;

int search(int arr[], int n, int x)
{
    int low = 0, high = n - 1;
    while (low <= high)
    {
        // Like Normal Binary Search
        int mid = (low + high) / 2;

        if (arr[mid] == x)
            return mid;
        // Left Half Sorted
        if (arr[low] < arr[mid])
        {
            if (x >= arr[low] && x < arr[mid])
                high = mid - 1;
            else
                low = mid + 1;
        }
        // Right Half Sorted
        else
        {
            if (x > arr[mid] && x <= arr[high])
                low = mid + 1;
            else
                high = mid - 1;
        }
    }
    return -1;
}

int main()
{
    int arr[] = {10, 20, 40, 60, 5, 8};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << search(arr, n, 20) << endl; // 1
    cout << search(arr, n, 5);          // 4
}
