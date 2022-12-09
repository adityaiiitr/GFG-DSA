// Given a sorted array and a sum, find if there is a pair with given sum
#include <iostream>
using namespace std;

bool isPair(int arr[], int left, int n, int x)
{
    int right = n - 1;
    while (left < right)
    {
        if (arr[left] + arr[right] == x)
            return true;
        else if (arr[left] + arr[right] > x)
            right--;
        else
            left++;
    }
    return false;
}

bool isTriplet(int arr[], int n, int x)
{
    for (int i = 0; i < n; i++)
    {
        if (isPair(arr, i + 1, n - 1, x - arr[i]))
            return true;
    }
    return false;
}

int main()
{
    int arr[] = {2, 4, 8, 9, 11, 12, 20, 30};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << isPair(arr, 0, n, 23) << endl;
    cout << isTriplet(arr, n, 32);
}
