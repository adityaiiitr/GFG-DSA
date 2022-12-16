#include <iostream>
using namespace std;

void cycleSortDistinct(int arr[], int n)
{
    for (int cs = 0; cs < n - 1; cs++)
    {
        int item = arr[cs];
        int pos = cs;
        for (int i = cs + 1; i < n; i++)
            if (arr[i] < item)
                pos++;
        swap(item, arr[pos]);
        while (pos != cs)
        {
            pos = cs;
            for (int i = cs + 1; i < n; i++)
                if (arr[i] < item)
                    if (arr[i] < item)
                        pos++;
            swap(item, arr[pos]);
        }
    }
}

int main()
{
    int arr[] = {2, 86, 55, 90, 44, 54, 2, 54, 124, 06};
    // Check if starting is smaller then it is working or else
    // it is not working for same elements
    int n = sizeof(arr) / sizeof(arr[0]);
    cycleSortDistinct(arr, n);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}