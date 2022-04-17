#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N;
    cin >> N;
    int sum_n = 0;
    int ave_n = 0;
    vector<int> A(N, 0);
    for (int i = 0; i < N; i++)
    {
        cin >> A.at(i);
        sum_n += A.at(i);
    }

    ave_n = sum_n / N;

    for (int i = 0; i < N; i++)
    {
        cout << abs(A.at(i) - ave_n) << endl;
    }
    return 0;
}
