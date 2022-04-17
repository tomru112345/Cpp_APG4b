#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N;
    cin >> N;
    char S[N];

    int check = 0b0000;

    for (int i = 0; i < N; i++)
    {
        cin >> S[i];
        if (S[i] == 'P')
        {
            if (check / 8 < 1)
            {
                check += 0b1000;
            }
        }
        else if (S[i] == 'W')
        {
            if ((check % 8) / 4 < 1)
            {
                check += 0b0100;
            }
        }
        else if (S[i] == 'G')
        {
            if (((check % 8) % 4) / 2 < 1)
            {
                check += 0b0010;
            }
        }
        else if (S[i] == 'Y')
        {
            if (check % 2 != 1)
            {
                check += 0b0001;
            }
        }
        // cout << check << endl;
    }

    int num = 0;

    if (check / 8 == 1)
    {
        num++;
    }
    check = check % 8;

    if (check / 4 == 1)
    {
        num++;
    }
    check = check % 4;

    if (check / 2 == 1)
    {
        num++;
    }
    check = check % 2;

    if (check % 2 == 1)
    {
        num++;
    }

    // cout << num << endl;
    if (num == 3)
    {
        cout << "Three" << endl;
    }
    else if (num == 4)
    {
        cout << "Four" << endl;
    }

    return 0;
}