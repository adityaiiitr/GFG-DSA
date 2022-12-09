#include <iostream>
using namespace std;

// Iterative Approach

int binarySearch(int arr[], int n, int key)
{
    int l = 0;
    int h = n - 1, mid;
    while (l <= h)
    {
        mid = (l + h) / 2;
        if (arr[mid] == key)
            return mid + 1;
        else if (arr[mid] < key)
            l = mid + 1;
        else
            h = mid - 1;
    }
    return -1;
}

// Recursive Approach

int recursiveBinarySearch(int arr[], int low, int high, int key)
{

    if (low > high)
        return -1;

    int mid = (low + high) / 2;
    if (arr[mid] == key)
        return mid + 1;

    if (low > high)
        return -1;

    if (arr[mid] < key)
        recursiveBinarySearch(arr, mid + 1, high, key);
    else
        recursiveBinarySearch(arr, low, mid - 1, key);
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << recursiveBinarySearch(arr, 0, n - 1, 4);
}