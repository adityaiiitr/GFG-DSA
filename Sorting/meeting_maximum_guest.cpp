#include <iostream>
#include <algorithm>
using namespace std;

int maxGuest(int arr[], int dep[], int n)
{
    sort(arr, arr + n);
    sort(dep, dep + n);
    int res = 1, i = 1, j = 0, curr = 1;
    while (i < n && j < n)
    {
        if (arr[i] <= dep[j])
        {
            curr++;
            i++;
        }
        else
        {
            curr--;
            j++;
        }
        res = max(res, curr);
    }
    return res;
}

int main()
{
    int arr[] = {800, 700, 600, 500};
    int dep[] = {840, 820, 830, 530};
    int n = sizeof(arr) / sizeof(arr[0]);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " " << dep[i] << " \n";
    }
    cout << "\n";
    cout << maxGuest(arr, dep, n);
}