#include <iostream>
using namespace std;

// Efficient Approach
int sqRootFloor(int x)
{
    int low = 1, high = x, ans = -1;
    while (low <= high)
    {
        int mid = (low + high) / 2;
        int msq = mid * mid;
        if (msq == x)
            return mid;
        else if (msq > x)
            high = mid - 1;
        else
        {
            low = mid + 1;
            ans = mid;
        }
    }
    return ans;
}
// // Naive approach
// int sqRootFloor(int n) // root n i time complexity
// {
//     int i = 1;
//     while (i * i <= n)
//         i++;

//     return i - 1;
// }

int main()
{
    int n;
    cin >> n;
    cout << sqRootFloor(n);
}