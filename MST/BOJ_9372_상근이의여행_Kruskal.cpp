// BOJ 9372번
// 상근이의 여행 _ Kruskal
// Silver 4

#include <iostream>
#include <vector>
using namespace std;

vector<int> parent;

int find(int x) {
    if (parent[x] == x) return x;
    return parent[x] = find(parent[x]);
}

void unionParent(int x, int y) {
    x = find(x);
    y = find(y);

    if (x < y) parent[y] = x;
    else parent[x] = y;
}

int cycle(int x, int y) {
    if (find(x) == find(y)) return 1;
    else return 0;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int testCase;
    cin >> testCase;

    while (testCase--) {
        int N, M, ans = 0;
        cin >> N >> M; // 국가 수, 비행기 수
        parent.resize(N+1);

        // 부모 초기화
        for (int i = 1; i <= N; i++) parent[i] = i;

        for (int j = 0; j < M; j++) {
            int depart, arrive;
            cin >> depart >> arrive;
            
            if (!cycle(parent[depart], parent[arrive])) {
                ans ++;
                unionParent(parent[depart], parent[arrive]);
            }
        }
        cout << ans << endl;
    }
    

    return 0;
}