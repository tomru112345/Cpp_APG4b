#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    int out = 0;
    for (int i = 0; i < (int)s.size(); i++)
    {
        if (s[i] == '1')
        {
            out++;
        }
    }
    cout << out << endl;
    return 0;
}