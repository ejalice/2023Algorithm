// BOJ 1890번
// 점프
// Silver 1

#include <iostream>
#include <vector>
using namespace std;

// 경로가 매우매우매우 많아질 수 있으므로 꼭 long long type으로 해주기.
int N;
int a[101][101] = {0, };
long long ans[101][101] = {0, };

void dp();
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> N;
    for (int i = 1; i <= N; i++) {
        for (int j = 1; j <= N; j++) {
            cin >> a[i][j];
        }
    }
    
    dp();

    cout << ans[N][N];

    return 0;
}

void dp() {
    ans[1][1] = 1;
    
    for (int i = 1; i <= N; i++) {
        for (int j = 1; j <= N; j++) {
            if (a[i][j] == 0) continue;

            int jump = a[i][j];

            if (i + jump <= N)
                ans[i+jump][j] += ans[i][j];

            if (j + jump <= N)
                ans[i][j+jump] += ans[i][j];
        }
    }
}

// DFS
// #include <iostream>
// #include <vector>
// #include <algorithm>
// #include <stack>
// using namespace std;
// typedef pair<int, int> T;

// int N;
// int a[101][101] = {0, };
// int ans = 0;
// stack<T> s;

// void DFS();
// int main() {
//     ios::sync_with_stdio(false);
//     cin.tie(NULL);

//     cin >> N;
//     for (int i = 1; i <= N; i++) {
//         for (int j = 1; j <= N; j++) {
//             cin >> a[i][j];
//         }
//     }

//     s.push({1, 1});
//     DFS();

//     cout << ans << endl;

//     return 0;
// }


// void DFS() {
//     while (!s.empty()) {
//         T temp = s.top();
//         int i = temp.first;
//         int j = temp.second;
//         s.pop();

//         int d = a[i][j];

//         if (d == 0) {
//             ans += 1;
//         } else {
//             // 우측
//             if (i+d <= N) {
//                 s.push({i+d, j});
//             }

//             // 하단
//             if (j+d <= N) {
//                 s.push({i, j+d});
//             }
//         }
//     }
// }