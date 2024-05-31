#include <iostream>
#include <vector>
using namespace std;

int N, connect;
bool visited[101] = {0,};
vector<int> network[101];
vector<int> warm;
int answer = -1;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> N;
    cin >> connect;

    for (int i = 0; i < connect; i++) {
        int u, v;
        cin >> u >> v;
        network[u].push_back(v);
        network[v].push_back(u);
    }

    warm.push_back(1);

    while (!warm.empty()) {
        int x = warm.back();
        warm.pop_back();

        if (visited[x])
            continue;
        
        visited[x] = 1;
        answer ++;

        for (int i = 0; i < network[x].size(); i++) {
            warm.push_back(network[x][i]);
        }
    }

    cout << answer << '\n';

    return 0;
}