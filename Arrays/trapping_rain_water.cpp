#include <iostream>
using namespace std;

int getWater(int arr[], int n)
{
    int res = 0;
    for (int i = 1; i < n - 1; i++)
    {
        int lMax = arr[i];
        for (int j = 0; j < i; j++)
        {
            lMax = max(arr[j], lMax);
        }
        int rMax = arr[i];
        for (int j = i + 1; j < n; j++)
        {
            rMax = max(arr[j], rMax);
        }
        res += min(lMax, rMax) - arr[i];
    }
    return res;
}

int main()
{
    // int arr[] = {3, 0, 1, 2, 5}; //6
    int arr[] = {1, 2, 3};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << getWater(arr, n);
}