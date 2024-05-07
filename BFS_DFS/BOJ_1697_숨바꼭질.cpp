// BOJ 1697번
// 숨바꼭질
// Silver 1

#include <iostream>
#include <queue>
using namespace std;

int N, K;
queue<int> q;
int visited[100001] = {0,};
int ans = 0;

void BFS(int X);

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> N >> K;

    q.push(N);
    visited[N] = 0;

    while (!q.empty()) {
        
        int x = q.front();
        q.pop();

        if (x == K) {
            break;
        } else {
            if (x >= 1 && !visited[x-1]) {
                q.push(x-1);
                visited[x-1] = visited[x] + 1;
            }
            if (x+1 <= 100000 && !visited[x+1]) {
                q.push(x+1);
                visited[x+1] = visited[x] + 1;
            }
            if (2*x <= 100000 && !visited[2*x]) {
                q.push(2*x);
                visited[2*x] = visited[x] + 1;
            }
        }
    }

    cout << visited[K];
    
    return 0;
}