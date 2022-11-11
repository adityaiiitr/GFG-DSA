#include <iostream>
using namespace std;

void printFreq(int arr[], int n)
{
    int freq = 1, i = 1;
    while (i < n)
    {
        while (i < n && arr[i] == arr[i - 1])
        {
            freq++;
            i++;
        }
        cout << arr[i - 1] << " " << freq << "\n";
        i++;
        freq = 1;
    }
    if (n == 1 || arr[n - 1] != arr[n - 2])
    {
        cout << arr[n - 1] << " " << 1;
    }
}
int main()
{
    int arr[] = {10, 10, 10, 25, 30, 30};
    int n = sizeof(arr) / sizeof(arr[0]);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << "\n";
    printFreq(arr, n);
    return 0;
}