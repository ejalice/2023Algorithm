// BOJ 11725번
// 트리의 부모 찾기
// Silver 2

#include <iostream>
#include <vector>
using namespace std;

int N;
vector<vector<int>> v;
vector<int> parent;
vector<int> visited;

void dfs(int idx) {
    visited[idx] = 1;

    for (int i = 0; i < v[idx].size(); i++) {
        int next = v[idx][i];
        
        if (visited[next] == 0) {
            parent[next] = idx;
            dfs(next);
        }
    }
}


int main() {
    cin >> N;
    v.resize(N+1);
    parent.resize(N+1); // Node 수가 0인 것은 없음. 따라서, N+1 size로 만들어줘야 배열 사용하기 편리.
    visited.resize(N+1);

    for (int i = 0; i < N-1; i++) {
        int from, to;
        cin >> from >> to;
        v[from].push_back(to);
        v[to].push_back(from);
    }

    dfs(1);

    for (int i = 2; i < N+1; i++) {
            cout << parent[i] << endl;
    }

    return 0;
}