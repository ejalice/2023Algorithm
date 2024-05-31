// BOJ 1051번
// 숫자 정사각형
// Silver 3

#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int N, M;
    cin >> N >> M;
    int v[55][55] = {0, };
    int answer = -1;

    for (int i = 0; i < N; i++) {
        string number;
        cin >> number;
        for (int j = 0; j < M; j++) {
            v[i][j] = number[j] - '0';
        }
    }

    for (int r = min(M, N) - 1; r >= 0; r--){
        for (int i = 0; i < (N-r); i++) {
            for (int j = 0; j < (M-r); j++) {
                if ((v[i][j] == v[i][j+r]) && (v[i][j+r] == v[i+r][j+r]) && (v[i][j] == v[i+r][j])) {
                    answer = max(answer, r);
                }
            }
        }
    }

    answer = (answer < 0) ? 0 : answer;
    cout << pow(answer+1, 2)  << endl;

    return 0;
}