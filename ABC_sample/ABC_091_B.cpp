#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N, M;
    cin >> N;

    vector<string> s(N, "");

    for (int i = 0; i < N; i++){
        cin >> s.at(i);
    }

    cin >> M;

    vector<string> t(M, "");
    
    for (int i = 0; i < M; i++){
        cin >> t.at(i);
    }

    string search = "";
    int num = 0;
    int max_num = 0;

    for (int i = 0; i < N; i++){
        search = s.at(i);
        for (int j = 0; j < N; j++){
            if (search == s.at(j)){
                num++;
            }
        }
        for (int j = 0; j < M; j++){
            if (search == t.at(j)){
                num--;
            }
        }
        if (max_num < num){
            max_num = num;
        }
        num = 0;
    }

    cout << max_num << endl;


    return 0;
}