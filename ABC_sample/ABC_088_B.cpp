#include <bits/stdc++.h>
using namespace std;

int main(){
    int N;
    cin >> N;
    vector<int> a(N, 0);
    for(int i = 0; i < N; i++){
        cin >> a.at(i);
    }

    // 降順にソート
    sort(a.begin(), a.end(), greater<int>());

    int a_num = 0, b_num = 0;
    for (int i = 0; i < N; i++){
        if (i % 2 == 0){
            a_num += a.at(i);
        }else{
            b_num += a.at(i);
        }
    }

    cout << abs(a_num - b_num) << endl;
    
    return 0;
}