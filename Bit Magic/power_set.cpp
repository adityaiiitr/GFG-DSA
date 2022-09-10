#include <iostream>
#include <string.h>
#include <math.h>
using namespace std;

void printPowerSet(string str)
{
    int n = str.length();
    int powSize = pow(2, n);
    for (int counter = 0; counter < powSize; counter++)
    {
        for (int j = 0; j < n; j++)
        {
            if ((counter & (1 << j)) != 0)
                cout << (str[j]);
        }
        cout << "\n";
    }
}

int main()
{
    string str;
    cin >> str;
    printPowerSet(str);
    return 0;
}