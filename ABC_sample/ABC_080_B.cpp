#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N;
    cin >> N;

    int Q = N;

    int out = 0;
    while (Q > 0)
    {
        out += (Q % 10);
        Q /= 10;
    }

    if (N % out == 0)
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }
    return 0;
}