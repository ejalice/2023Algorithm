// BOJ 1197번
// 최소 스패닝 트리_Prim
// Gold 4

#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
using namespace std;
typedef pair<int, int> T;

vector<T> graph[100001];
bool visited[10001];

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int V, E, ans = 0;
    cin >> V >> E;

    for (int i = 1; i <= E; i++) {
        int u, v, distance;
        cin >> u >> v >> distance;

        graph[u].push_back({v, distance});
        graph[v].push_back({u, distance});
    }

    priority_queue<T, vector<T>, greater<T>> pQ;
    
    visited[1] = 1;
    for (int j = 0; j < graph[1].size(); j++) {
        pQ.push({graph[1][j].second, graph[1][j].first}); // distance - v
    }

    while (!pQ.empty()) {
        int now = pQ.top().second;
        int now_distance = pQ.top().first;
        pQ.pop();

        if (visited[now] == 0) {
            visited[now] = 1;
            ans += now_distance;
        } else {
            continue;
        }

        for (int i = 0; i < graph[now].size(); i++) {
            int next = graph[now][i].first;
            int next_distance = graph[now][i].second;

            if (visited[next] == 0)
                pQ.push({next_distance, next});
        }

    }
    
    cout << ans << endl;


    return 0;
}