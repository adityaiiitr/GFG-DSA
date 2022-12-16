#include <iostream>
#include <algorithm>
using namespace std;

struct Interval
{
    int st, end;
};
int mycmp(Interval a, Interval b)
{
    return a.st < b.st;
}
void mergeInterval(Interval arr[], int n)
{
    sort(arr, arr + n, mycmp);
    int res = 0;
    for (int i = 1; i < n; i++)
    {
        if (arr[res].end >= arr[i].st)
        {
            arr[res].end = max(arr[res].end, arr[i].end);
            arr[res].st = min(arr[res].st, arr[i].st);
        }
        else
        {
            res++;
            arr[res] = arr[i];
        }
    }

    // Printing The Interval
    for (int i = 0; i <= res; i++)
    {
        cout << arr[i].st << " " << arr[i].end << " \n";
    }
}

int main()
{
    Interval arr[] = {{1, 3}, {2, 4}, {5, 7}, {6, 8}};
    int n = sizeof(arr) / sizeof(arr[0]);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i].st << " " << arr[i].end << " \n";
    }
    cout << "\n";
    mergeInterval(arr, n);
}