#include <bits/stdc++.h>
using namespace std;

int main(){
    int N;
    cin >> N;
    vector<int> d(N, 0);
    for (int i = 0; i < N; i++){
        cin >> d.at(i);
    }
    sort(d.begin(), d.end(), greater<int>());

    int status_num = d.at(0);
    int num = 1;
    for (int i = 0; i < N; i++){
        if (d.at(i) != status_num){
            status_num = d.at(i);
            num++;
        }
    }
    cout << num << endl;
    return 0;
}