// BOJ 2606번
// 바이러스
// Silver 3

#include <iostream>
using namespace std;

int cnt = 0;
int N, M; // N: 컴퓨터 수, M: 간선 수
int map[101][101];
bool visited[101];


void DFS(int v) { // Stack
    visited[v] = true;
    cnt++;

    for (int i = 1; i <= N; i++){
        if (map[v][i] == 1 && visited[i] == false) {
            DFS(i);
        }
    }

}

int main() {
    cin >> N >> M;

    for (int i=0; i<M; i++) {
        int u, v;
        cin >> u >> v;
        map[u][v] = 1;
        map[v][u] = 1;
    }
    
    DFS(1);
    cout << cnt-1;

    return 0;
}