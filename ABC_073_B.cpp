#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N;
    cin >> N;
    int l[N], r[N];
    int num = 0;
    for (int i = 0; i < N; i++)
    {
        cin >> l[i] >> r[i];
    }

    int max = 0;
    for (int i = 0; i < N; i++)
    {
        if (r[i] > max)
        {
            max = r[i];
        }
    }

    int seat_size = max;
    int seat[seat_size];
    for (int i = 0; i < seat_size; i++)
    {
        seat[i] = 0;
    }

    for (int i = 0; i < N; i++)
    {
        int c = l[i] - 1;
        for (c; c < r[i]; c++)
        {
            if (seat[c] == 0)
            {
                seat[c] = 1;
            }
        }
    }

    for (int i = 0; i < seat_size; i++)
    {
        if (seat[i] == 1)
        {
            num++;
        }
    }

    cout << num << endl;
    return 0;
}