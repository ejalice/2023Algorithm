// BOJ 9372번
// 상근이의 여행 _ Prim
// Silver 4

#include <iostream>
#include <cstring>
#include <vector>
#include <queue>
using namespace std;

int visited[10001];

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int testCase;
    cin >> testCase;

    while (testCase--) {
        int N, M, ans = 0;
        cin >> N >> M;
        vector<int> graph[N+1];
        memset(visited, 0, sizeof(visited));
    
        for (int j = 0; j < M; j++) {
            int u, v;
            cin >> u >> v;
            graph[u].push_back(v);
            graph[v].push_back(u);
        }

        priority_queue<int, vector<int>, greater<int>> pQ;
        pQ.push(1);
        while (!pQ.empty()) {
            int x = pQ.top();
            pQ.pop();
            if (visited[x] == 1) 
                continue;
            else {
                ans ++;
                visited[x] = 1;

                for (int i = 0; i < graph[x].size(); i++) {
                    int y = graph[x][i];
                    pQ.push(y);
                }
            }
        }
            cout << ans-1 << endl;
    }    

    return 0;
}