// BOJ 15661번
// 링크와 스타트
// Gold 5

#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int N;
int s[21][21];
int ans = INT_MAX;

vector<int> start;
vector<int> link;

void backtracking(int n) {
    if (n == N+1) {
        if (start.empty() || link.empty())
            return;
        
        int start_sum = 0;
        int link_sum = 0;

        int start_size = start.size();
        int link_size = link.size();

        for (int i = 0; i < start_size; i++) {
            for (int j = i+1; j < start_size; j++) {
                start_sum += s[start[i]][start[j]];
                start_sum += s[start[j]][start[i]];
            }
        }

        for (int i = 0; i < link_size; i++) {
            for (int j = i+1; j < link_size; j++) {
                link_sum += s[link[i]][link[j]];
                link_sum += s[link[j]][link[i]];
            }
        }

        ans = min(ans, abs(link_sum - start_sum));
        return;
    }

    start.push_back(n);
    backtracking(n+1);
    start.pop_back();

    link.push_back(n);
    backtracking(n+1);
    link.pop_back();
}


int main() {
    cin >> N;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++)
            cin >> s[i][j];
    }
    backtracking(0);
    cout << ans;

    return 0;
}