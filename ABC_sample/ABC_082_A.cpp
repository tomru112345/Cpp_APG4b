#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;
    int out = (a + b) / 2;
    int Decimal = (a + b) % 2;
    if (Decimal == 1)
    {
        out += 1;
    }
    cout << out << endl;
    return 0;
}