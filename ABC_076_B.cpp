#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N, K;
    cin >> N >> K;
    int t = 1;
    for (int i = 0; i < N; i++)
    {
        if ((K + t) > (t * 2))
        {
            t *= 2;
        }
        else
        {
            t += K;
        }
    }
    cout << t << endl;
    return 0;
}