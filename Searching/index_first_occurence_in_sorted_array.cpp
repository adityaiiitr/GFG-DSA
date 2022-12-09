#include <iostream>
using namespace std;

// EFFICIENT SOLUTION
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

main()
{
    int arr[] = {5, 10, 10, 20, 20};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << firstOcc(arr, n, 20);
}