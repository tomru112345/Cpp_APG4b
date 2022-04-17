#include <bits/stdc++.h>
using namespace std;

int main(){
    string S;
    cin >> S;
    int S_size = S.size();
    if (S.at(S_size - 1) == 'T'){
        cout << "YES" << endl;
    }else{
        cout << "NO" << endl;
    }
    return 0;
}