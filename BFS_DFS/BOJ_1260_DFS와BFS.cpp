// BOJ 1260번
// DFS와 BFS
// Silver 2

#include <iostream>
#include <queue>
using namespace std;

int N;
int M;
int V; // start Node
int map[1001][1001];
bool visited[1001];


// 방법1 - 2차원 Arr
void DFS(int v) { // Stack
    int N = sizeof(map)/sizeof(map[0]);
    visited[v] = true;
    cout << v << " ";
    
    for (int i = 1; i <= N; i++) {
        if (map[v][i] == 1 && visited[i] == 0) {
            DFS(i);
        }
        if (i==N)
            return;
    }
}

void reset() {
    for (int i = 0; i<= N; i++) {
        visited[i] = 0;
    }
}

void BFS(int v) { // Queue
    queue<int> q;
    q.push(v);

    while(!q.empty()) {
        int next = q.front();
        visited[next] = 1;
        cout << next << " ";
        q.pop();

        for (int i = 1; i <= N; i++) {
            if (map[next][i] == 1 && visited[i] == false) {
                q.push(i);
                visited[i] = 1;
            }
        }
    }
}

int main() {

    cin >> N >> M >> V;

    for (int i = 0; i < M; i++) {
        int x, y;
        cin >> x >> y;
        map[x][y] = 1;
        map[y][x] = 1;
    }

    DFS(V);
    cout << "\n";
    
    reset();

    BFS(V);

    return 0;
}