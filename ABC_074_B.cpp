#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N, K;
    cin >> N >> K;

    int total = 0;

    for (int i = 0; i < N; i++)
    {
        int x;
        cin >> x;

        if (x < K - x)
        {
            total += (2 * x);
        }
        else
        {
            total += 2 * (K - x);
        }
    }
    cout << total << endl;
    return 0;
}