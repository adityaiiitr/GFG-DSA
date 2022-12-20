#include <iostream>
using namespace std;
void patSearch(string &txt, string &pat)
{
    int m = pat.length();
    int n = txt.length();
    for (int i = 0; i <= n - m;)
    {
        int j;
        for (j = 0; j < m; j++)
            if (pat[j] != txt[i + j])
                break;
        if (j == m)
            cout << i << " ";
        if (j == 0)
            i++;
        else
            i = i + j;
    }
}

int main()
{
    string txt = "ABCABCD", pat = "ABCD";
    patSearch(txt, pat);
}