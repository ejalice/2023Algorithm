// BOJ 2631번
// 줄세우기
// Gold 4

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// 답:  N- LIS 길이

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int N;
    cin >> N;
    
    int arr[210] = {0, };
    int dp[210];

    for (int i = 0; i < N; i++) {
        cin >> arr[i];
    }

    dp[0] = 1;

    for (int i = 1; i < N; i++) {
        int max_dp = 0;
        for (int j = 0; j < i; j++) {
            if (arr[j] < arr[i])
                max_dp = max(max_dp, dp[j]);
        }
        dp[i] = max_dp + 1;
    }

    int ans = 0;
    for (int i = 0; i < N; i++) {
        ans = max(dp[i], ans);
    }

    cout << N - ans << '\n';

    return 0;
}