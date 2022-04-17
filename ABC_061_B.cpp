#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N, M;
    cin >> N >> M;
    vector<int> a(M, 0), b(M, 0);
    vector<vector<int>> road(N, vector<int>(N, 0));
    for (int i = 0; i < M; i++)
    {
        cin >> a.at(i) >> b.at(i);
        if (road[a.at(i) - 1][b.at(i) - 1] >= 0)
        {
            road[a.at(i) - 1][b.at(i) - 1]++;
        }
        if (road[b.at(i) - 1][a.at(i) - 1] >= 0)
        {
            road[b.at(i) - 1][a.at(i) - 1]++;
        }
    }

    for (int i = 0; i < N; i++)
    {
        int num = 0;
        for (int j = 0; j < N; j++)
        {
            // cout << road[i][j] << " ";
            if (road[i][j] >= 1)
            {
                num += (road[i][j]);
            }
        }
        // cout << endl;
        cout << num << endl;
    }

    return 0;
}