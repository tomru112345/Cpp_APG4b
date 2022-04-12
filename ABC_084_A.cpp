#include <bits/stdc++.h>
using namespace std;

int main()
{
    int M = 0;
    int out = 0;
    cin >> M;
    if (M >= 24)
    {
        M -= 24;
    }
    else
    {
        out += 24;
    }
    out += (24 - M);
    cout << out << endl;
    return 0;
}