// BOJ 14889번
// 스타트와 링크
// Silver 1

#include <iostream>
#include <vector>
#include <climits>
#include <algorithm>
using namespace std;

int N;

int S[21][21] = {0, };
vector<int> start;
vector<int> link;

int whole_sum = 0;
int answer = INT_MAX;

void backtracking(int x);
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> N;
    
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            cin >> S[i][j];
            whole_sum += S[i][j];
        }
    }

    backtracking(0);
    cout << answer << '\n';

    return 0;
}

void backtracking(int x) {
    int start_sum = 0;
    int link_sum = 0;

    if (x == N) {
        for (int i = 0; i < start.size(); i++) {
            for (int j = 0; j < N/2; j++) {
                start_sum += S[start[i]][start[j]];
            }
        }

        for (int i = 0; i < link.size(); i++) {
            for (int j = 0; j < N/2; j++) {
                link_sum += S[link[i]][link[j]];
            }
        }
        answer = min(answer, abs(start_sum - link_sum));
        return;
     }
     
    if (start.size() != N/2) {
        start.push_back(x);
        backtracking(x+1);
        start.pop_back();
    }
    if (link.size() != N/2) {
        link.push_back(x);
        backtracking(x+1);
        link.pop_back();
    }
}
