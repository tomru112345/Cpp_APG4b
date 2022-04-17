#include <bits/stdc++.h>
using namespace std;

int main(){
    string A, B;
    cin >> A >> B;
    int A_len = A.size();
    int B_len = B.size();
    if (A_len > B_len){
        cout << A << endl;
    }else{
        cout << B << endl;
    }
    return 0;
}