#include <bits/stdc++.h>
using namespace std;

int main(){
    int A, B;
    char op;
    cin >> A >> op >> B;
    int out = 0;
    if (op == '+'){
        out = A + B;
    }else if (op == '-'){
        out = A - B;
    }
    cout << out << endl;
    return 0;
}