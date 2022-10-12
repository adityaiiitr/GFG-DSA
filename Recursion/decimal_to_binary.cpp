#include <iostream>
using namespace std;

void recursive_bin(int n)
{
    if (n == 0)
        return;
    recursive_bin(n / 2);
    cout << n % 2;
}

int main()
{
    int n;
    cin >> n;
    recursive_bin(n);
    return 0;
}