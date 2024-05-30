// BOJ 14501번
// 퇴사
// Silver 3

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int N;
int T[16];
int P[16];
int visited[16] = {0, };
vector<int> visit;
int answer = 0;

void backtracking(int x);
int main() {
    cin >> N;

    for (int i = 0; i < N; i++) {
        cin >> T[i] >> P[i];
    }

    backtracking(0);
    cout << answer << '\n';

    return 0;
}

void backtracking(int x) {
    if (x == N) {
        int value = 0;
        for (int i = 0; i < visit.size(); i++) {
            value += P[visit[i]];
        }
        answer = max(answer, value);
        return;
    }

    if (!visited[x] && (x+T[x]-1 < N)) {
        visit.push_back(x);
        backtracking(x+T[x]);
        visit.pop_back();
    }

    backtracking(x+1);
}