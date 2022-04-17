#include <bits/stdc++.h>
using namespace std;

int main(){
    char c;
    cin >> c;
    char Vowel[5] = {'a', 'i', 'u', 'e', 'o'};
    for (int i = 0; i < 5; i++){
        if (c == Vowel[i]){
            cout << "vowel" << endl;
            exit(0);
        }
    }
    cout << "consonant" << endl;
    return 0;
}