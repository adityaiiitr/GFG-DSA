#include <iostream>
using namespace std;

void rightShift(int &n, int &k)
{
    if ((n >> (k - 1)) & 1 == 1)
        cout << "YES"
             << "\n";
    else
        cout << "NO"
             << "\n";
}

void leftShift(int &n, int &k)
{
    if (n & (1 << (k - 1)) != 0)
        cout << "YES"
             << "\n";
    else
        cout << "NO"
             << "\n";
}

int main()
{
    int n, k;
    cin >> n >> k;
    rightShift(n, k);
    leftShift(n, k);
    return 0;
}