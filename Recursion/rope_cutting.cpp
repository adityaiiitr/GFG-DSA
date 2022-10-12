// Output not according checked
#include <iostream>
#include <algorithm>
using namespace std;

bool maxPiece(int n, int a, int b, int c)
{
    if (n == 0)
        return 0;
    if (n < 0)
        return -1;

    int res = max({maxPiece(n - a, a, b, c),
                   maxPiece(n - b, a, b, c),
                   maxPiece(n - c, a, b, c)});
    if (res == -1)
        return -1;
    return res + 1;
}

int main()
{
    int a, b, c, n;
    cin >> n >> a >> b >> c;
    cout << maxPiece(n, a, b, c);

    return 0;
}