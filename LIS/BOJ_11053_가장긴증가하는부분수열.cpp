// BOJ 11053번
// 가장 긴 증가하는 부분 수열
// Silver 2

#include <iostream>
#include <vector>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int N;
    cin >> N;

    int arr[1001] = {0, };
    for (int i = 0; i < N; i++) {
        cin >> arr[i];
    }

    int DP[1001] = {0, };
    DP[0] = 1;

    for (int i = 1; i < N; i++) {
        int max_DP = 0;

        for (int j = 0; j < i; j++) {
            if (arr[i] > arr[j])
                max_DP = max(max_DP, DP[j]);
        }

        DP[i] = max_DP + 1;
    }

    int ans = 1;
    for (int i = 0; i < N; i++) {
        ans = max(ans, DP[i]);
    }

    cout << ans << '\n';

    return 0;
}