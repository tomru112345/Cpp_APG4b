#include <bits/stdc++.h>
#include <string>
using namespace std;

int main()
{
    string S;
    cin >> S;
    int num = 0;
    int ascii_0 = 48;
    num += ((int)S.at(0) - ascii_0);
    for (int i = 1; i < S.size(); i += 2)
    {

        if (S.at(i) == '+')
        {
            num += ((int)S.at(i + 1) - ascii_0);
        }
        else if (S.at(i) == '-')
        {
            num -= ((int)S.at(i + 1) - ascii_0);
        }
        // cout << num << endl;
    }
    cout << num << endl;
    return 0;
}