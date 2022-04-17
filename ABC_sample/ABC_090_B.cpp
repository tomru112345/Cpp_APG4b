#include <bits/stdc++.h>
using namespace std;

int main()
{
    int A, B;
    cin >> A >> B;

    int flg = 1;
    int num = 0;
    string s_i;
    for (int i = A; i <= B; i++)
    {
        s_i = to_string(i);
        flg = 1;

        for (int j = 0; j < (s_i.length() / 2); j++)
        {
            // cout << "s_i[" << j << "]:" << s_i[j] << endl;
            // cout << "s_i[" << s_i.length() - j - 1 << "]:" << s_i[s_i.length() - j - 1] << endl;
            if (s_i[j] != s_i[s_i.length() - j - 1])
            {
                flg = 0;
            }
        }
        if (flg == 1)
        {
            num++;
        }
    }

    cout << num << endl;

    return 0;
}