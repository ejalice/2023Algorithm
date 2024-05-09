// BOJ 1916번
// 최소비용 구하기
// Gold 5

// #include <iostream>
// #include <vector>
// #include <queue>
// #include <cstring>
// using namespace std;
// int vis[1003]; // 각 도시까지 비용 
// vector<pair<int, int>> v[1003]; // <도착도시, 비용>
// void fc(int a){
//     priority_queue<pair<int, int>, vector<pair<int,int>>, greater<pair<int, int>>> pq;
//     // 우선순위 큐 오름차순 정렬
//     // <비용, 도착 도시>
//     pq.push(make_pair(0, a));  
//     vis[a] = 0; // 출발 도시 비용 = 0
//     while (!pq.empty())
//     {
//         int cost = pq.top().first; // 현재 도시까지 비용
//         int x = pq.top().second; // 현재 도시
//         pq.pop();
        
//         // 현 도시까지 비용이 이미 기록된 비용보다 크면 pass
//         if (vis[x] < cost) 
//             continue;
        
//         // x 도시와 이어진 도시들 검사
//         for (int i = 0; i < v[x].size(); i++){
//             int nx = v[x][i].first; // 다음 도시 
//             int ncost = cost+v[x][i].second; // 다음 도시까지 비용
 
//             // 기록되어진 비용보다 지금 비용이 더 작다면
//             // 큐에 넣어줌 
//             if (vis[nx] > ncost){ 
//                 pq.push(make_pair(ncost, nx));
//                 vis[nx] = ncost; // 비용 다시 기록
//             }
//         }
//     }
// }
// int main(){
//     int n, m;
//     cin >> n >> m;
    
//     v[0].push_back(make_pair(0, 0));
//     memset(vis, 98765432, sizeof(vis)); // 모든 비용 최대로 
//     for (int i = 0; i < m; i++){
//         int a, b, c;
//         cin >> a >> b >> c;
//         v[a].push_back(make_pair(b, c));
//     }
//     int st, dt; // 출발 도시, 도착 도시
//     cin >> st >> dt;
//     fc(st); 
//     cout << vis[dt]; // dt 도시의 비용 출력
//     return 0;
// }

#include <iostream>
#include <queue>
#include <vector>
#include <climits>
using namespace std;
typedef pair<int, int> T; // value, node
const int MAX_N = 10001;

int N, M;
vector<T> edges[MAX_N];
bool visited[MAX_N] = {false,};
int value[MAX_N];
priority_queue<T, vector<T>, greater<T>> pQ; // value, node

void dijkstra(int start);
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> N;
    cin >> M;

    for (int i = 0; i < M; i++) {
        int u, v, d;
        cin >> u >> v >> d;
        edges[u].push_back({d, v});
    }

    int start, end;

    cin >> start >> end;

    dijkstra(start);
    
    cout << value[end] << '\n';

    return 0;
}

void dijkstra(int start) {
    pQ.push({0, start});
    fill(value, value + MAX_N, INT_MAX);
    value[start] = 0;

    while (!pQ.empty()) {
        int d = pQ.top().first;
        int u = pQ.top().second;
        pQ.pop();

        if (visited[u]) continue;
        visited[u] = true;

        for (auto& edge : edges[u]) {
            int nxt = edge.second;
            int n_d = d + edge.first;

            if (n_d < value[nxt]) {
                value[nxt] = n_d;
                pQ.push({n_d, nxt});
            }
        }
    }
}