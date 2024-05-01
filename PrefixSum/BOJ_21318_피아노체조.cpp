// BOJ 21318번
// 피아노 체조
// Silver 1

// 시간초과를 줄이기 위한 방법
// 1)
// ios::sync_with_stdio(false);
// cin.tie(false)
// 2)
// endl; 대신 '\n' 사용하기.

#include <iostream>
#include <vector>
using namespace std;

vector<int> hard;
int cnt[100001];

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int N, Q;
    cin >> N;

    for (int i = 0; i < N; i++) {
        int tmp;
        cin >> tmp;
        hard.push_back(tmp);
        if (i == 0)
            continue;
        if (hard[i-1] > tmp)
            cnt[i] = cnt[i-1] + 1;
        else {
            cnt[i] = cnt[i-1];
        }
    }

    cin >> Q;

    while (Q--) {
        int x, y;
        int ans = 0;
        cin >> x >> y;
        ans = cnt[y-1] - cnt[x-1];
        cout << ans << '\n';
    }
    return 0;
}

// ERROR: 시간초과
// void piano(int N, vector<int> &hard, int Q, vector<vector<int>> scope);

// int main() {
//     int N;
//     vector<int> hard;
//     int Q;
//     vector<vector<int>> scope;
//     int x, y;

//     cin >> N;
//     for (int i = 0; i < N; i++) {
//         int temp;
//         cin >> temp;
//         hard.push_back(temp);
//     }
//     cin >> Q;
//     for (int i = 0; i < Q; i++) {
//         cin >> x >> y;
//         vector<int> temp {x, y};
//         scope.push_back(temp);
//     }

//     piano(N, hard, Q, scope);

//     return 0;
// }

// void piano(int N, vector<int>& hard, int Q, vector<vector<int>> scope) {
//     hard.insert(hard.begin(), 0);
//     int mistake[N+1];
//     int answer = 0;
    
//     for (int i = 1; i <= N; i++) {
//         mistake[i] = (hard[i-1] - hard[i] > 0 ? 1 : 0);
//     }

//     for (int i = 0; i < Q; i++) {
//         for (int x = scope[i][0]; x < scope[i][1]; x++) {
//             answer += mistake[x];
//         }
//         cout << answer << endl;
//     }
// }

// void piano(int N, vector<int>& hard, int Q, vector<vector<int>> scope) {
    
//     hard.insert(hard.begin(), 0);

//     for (int i = 0; i < Q; i++) {
//         int mistake = 0;
//         int x = scope[i][0];
//         int y = scope[i][1];

//         while (x < y) {
//             if (hard[x] > hard[x+1])
//                 mistake ++;
//             x++;
//         }

//         cout << mistake << endl;
//     }
// }