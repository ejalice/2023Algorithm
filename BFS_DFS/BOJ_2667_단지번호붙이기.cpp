// BOJ 2667번
// 단지번호 붙이기
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
typedef pair<int, int> T;

int N;
int map[30][30] = {0, };
vector<int> answer;

int x_dir[4] = {-1, 0, 0, 1};
int y_dir[4] = {0, -1, 1, 0};

int DFS(int x, int y);
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    cin >> N;

    for (int i = 0 ; i < N; i++) {
        string input;
        cin >> input;
        for (int j = 0; j < N; j++) {    
            map[i][j] = input[j] - '0';
        }
    }

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            if (map[i][j] == 1) {
                int tmp = DFS(i, j);
                answer.push_back(tmp);
            }
        }
    }

    sort(answer.begin(), answer.end());
    cout << answer.size() << '\n';

    for (int i = 0; i < answer.size(); i++) {
        cout << answer[i] << '\n';
    }

    return 0;
}

int DFS(int x, int y) {
    map[x][y] = 0;
    int cnt = 1;

    for (int k = 0; k < 4; k++) {
        int i = x + x_dir[k];
        int j = y + y_dir[k];

        if (i >= 0 && i < N && j >= 0 && j < N) {
            if (map[i][j] == 1)
                cnt += DFS(i, j);
        }
    }
    return cnt;
}