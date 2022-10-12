#include <iostream>
using namespace std;

void natural(int n)
{
    if (n == 0)
    {
        cout << "\n"; // Line change b/w Reverse and in order print
        return;
    }

    cout << n << " "; // Reverese Order
    natural(n - 1);
    // Not a Tail recursion if next line is in code!
    // It adds extra burden to store the unexecuted task. Hence Not optimized
    cout << n << " "; // In Order Printing
}

int main()
{
    int n;
    cin >> n;
    natural(n);
    return 0;
}