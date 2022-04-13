#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N;
    int A[N];
    cin >> N;
    for (int i = 0; i < N; i++)
    {
        A[i] = 0;
        cin >> A[i];
    }
    int total = 0;
    int num = N;
    while (num == N)
    {
        for (int i = 0; i < N; i++)
        {
            if (A[i] % 2 != 0)
            {
                num--;
                total--;
                break;
            }
            else
            {
                A[i] = A[i] / 2;
            }
            // cout << A[i] << ",";
        }
        // cout << endl;
        total++;
        // cout << "total:" << total << endl;
    }
    cout << total << endl;
    return 0;
}