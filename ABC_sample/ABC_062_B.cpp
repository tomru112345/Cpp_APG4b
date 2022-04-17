#include <bits/stdc++.h>
using namespace std;

int main()
{
    int H, W;
    cin >> H >> W;
    vector<string> a(H + 2, "");
    string s = "";
    for (int i = 0; i < (W + 2); i++)
    {
        s += "#";
    }
    a.at(0) = s;
    a.at(H + 1) = s;
    for (int i = 0; i < (H + 2); i++)
    {
        if (i >= 1 && i < (H + 1))
        {
            cin >> a.at(i);
            a.at(i) = ('#' + a.at(i) + '#');
        }
        cout << a.at(i) << endl;
    }

    return 0;
}