#include <iostream>
using namespace std;

int firstOcc(int arr[], int n, int x)
{
    int low = 0, high = n - 1;
    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (arr[mid] > x)
            high = mid - 1;
        else if (arr[mid] < x)
            low = mid + 1;
        else
        {
            if (mid == 0 || arr[mid - 1] != arr[mid])
                return mid;
            else
                high = mid - 1;
        }
    }
    return -1;
}

int lastOcc(int arr[], int n, int x)
{
    int low = 0, high = n - 1;
    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (arr[mid] > x)
            high = mid - 1;
        else if (arr[mid] < x)
            low = mid + 1;
        else
        {
            if (mid == n - 1 || arr[mid + 1] != arr[mid])
                return mid;
            else
                low = mid + 1;
        }
    }
    return -1;
}

int countOcc(int arr[], int n, int x)
{
    int first = firstOcc(arr, n, x);
    if (first == -1)
        return 0;
    else
        return lastOcc(arr, n, x) - first + 1;
}

int main()
{
    int arr[] = {1, 2, 2, 2, 4, 4, 5, 6, 7};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << countOcc(arr, n, 2);
}