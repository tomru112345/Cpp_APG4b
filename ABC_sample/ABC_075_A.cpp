#include <bits/stdc++.h>
using namespace std;

int main(){
    int H, W;
    cin >> H >> W;
    string S[H];
    for (int i = 0; i < H; i++){
        cin >> S[i];
        for (int j = 0; j < W; j++){
            if (S[i][j] == '.'){
                S[i][j] = '0';
            }
        }
    }

    int num = 0;

    for (int i = 0; i < H; i++){
        num = 0;
        for (int j = 0; j < W; j++){
            if (S[i][j] == '#'){
                if (j - 1 >= 0 && S[i][j - 1] != '#'){
                    num = int(S[i][j - 1]);
                    num++;
                    S[i][j - 1] = char(num);
                }
                if (j + 1 < W && S[i][j + 1] != '#'){
                    num = int(S[i][j + 1]);
                    num++;
                    S[i][j + 1] = char(num);
                }
                if (i + 1 < H && S[i + 1][j] != '#'){
                    num = int(S[i + 1][j]);
                    num++;
                    S[i + 1][j] = char(num);
                }
                if (i - 1 >= 0 && S[i - 1][j] != '#'){
                    num = int(S[i - 1][j]);
                    num++;
                    S[i - 1][j] = char(num);
                }
                if (i + 1 < H && j + 1 < W && S[i + 1][j + 1] != '#'){
                    num = int(S[i + 1][j + 1]);
                    num++;
                    S[i + 1][j + 1] = char(num);
                }
                if (i + 1 < H && j - 1 >= 0 && S[i + 1][j - 1] != '#'){
                    num = int(S[i + 1][j - 1]);
                    num++;
                    S[i + 1][j - 1] = char(num);
                }
                if (i - 1 >= 0 && j + 1 < W && S[i - 1][j + 1] != '#'){
                    num = int(S[i - 1][j + 1]);
                    num++;
                    S[i - 1][j + 1] = char(num);
                }
                if (i - 1 >= 0 && j - 1 >= 0 && S[i - 1][j - 1] != '#'){
                    num = int(S[i - 1][j - 1]);
                    num++;
                    S[i - 1][j - 1] = char(num);
                }
            }
        }
    }

    for (int i = 0; i < H; i++){
        cout << S[i] << endl;
    }
    
    return 0;
}