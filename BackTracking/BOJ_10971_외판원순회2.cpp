// BOJ 10971번
// 외판원 순회 2
// Silver 2

#include <iostream>
#include <climits>
using namespace std;

int N;
int W[15][15] = {0, };
int answer = INT_MAX;
bool visited[15];

void backtracking(int start, int x, int cost, int cnt);
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> N;

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            cin >> W[i][j];
        }
    }

    for (int i = 0; i < N; i++) {
        visited[i] = true;
        backtracking(i, i, 0, 1);
        visited[i] = false;
    }

    cout << answer << '\n';

    return 0;
}

void backtracking(int start, int x, int cost, int cnt) {
    if (cnt == N) {
        if (W[x][start] != 0)
            answer = min(answer, cost + W[x][start]);
        return;
    }

    for (int i = 0; i < N; i++) {
        if (visited[i] == true)
            continue;
        if (W[x][i] == 0)
            continue;
        
        visited[i] = true;
        backtracking(start, i, cost + W[x][i], cnt+1);
        visited[i] = false;
    }
}