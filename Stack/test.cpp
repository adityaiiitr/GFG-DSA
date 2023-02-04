#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
void range(int l[], int r[], int n)
{
    vector<int> arr{1000};
    for (int i = 0; i < n; i++)
    {
        arr[l[i]]++;
        arr[r[i] + 1]--;
    }
}
main()
{
    int l[] = {2, 2, 4}, r[] = {1, 3, 4};
    int size = sizeof(l) / sizeof(l[0]);
    range(l, r, size);
}