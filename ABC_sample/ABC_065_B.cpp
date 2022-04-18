#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N;
    cin >> N;
    vector<int> a(N, 0);
    vector<bool> check(N, false);
    for (int i = 0; i < N; i++)
    {
        cin >> a.at(i);
    }

    int next_stat = 0;
    int min_num = 0;
    int state_bt = 0;
    while(true){
        next_stat = a.at(state_bt) - 1;
        if (check.at(state_bt) == false){
            check.at(state_bt) = true;
        }else{
            cout << -1 << endl;
            break;
        }

        state_bt = next_stat;
        min_num++;

        if (state_bt == 1){
            cout << min_num << endl;
            break;
        }
    }
    return 0;
}