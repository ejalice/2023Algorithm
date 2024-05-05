// BOJ 1197번
// 최소 스패닝 트리 _ Kruskal
// Gold 4

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<pair<int, pair<int, int>>> graph; // {distance, {u, v}}
int parent[10001];

int find(int x) {
    if (parent[x] == x)
        return x;
    else return parent[x] = find(parent[x]);
}

void parentUnion(int x, int y) {
    x = find(x);
    y = find(y);

    if (x < y) parent[x] = y;
    else parent[y] = x;
}

int cycle(int x, int y) {
    if (find(x) == find(y))
        return 1;
    else return 0;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int V, E;
    cin >> V >> E;

    for (int i = 1; i <= V; i++) {
        parent[i] = i;
    }

    int ans = 0;

    for (int i = 0; i < E; i++) {
        int u, v, distance;
        cin >> u >> v >> distance;

        graph.push_back({distance, {u, v}});
    }

    sort(graph.begin(), graph.end());

    for (int j = 0; j < E; j++) {
        if (!cycle(graph[j].second.first, graph[j].second.second)) {
            ans += graph[j].first;
            parentUnion(graph[j].second.first, graph[j].second.second);
        }
    }

    cout << ans << '\n';

    return 0;
}