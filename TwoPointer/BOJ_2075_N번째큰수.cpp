// BOJ 2075번
// N번째 큰 수
// Silver 2

#include <iostream>
#include <vector>
#include <queue>
using namespace std;

// 우선순위 Queue 사용.
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int N;
    cin >> N;

    priority_queue<int, vector<int>, greater<int>> pq;

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            int tmp;
            cin >> tmp;
            pq.push(tmp);

            if (pq.size() > N) {
                pq.pop();
            }
        }
    }

    cout << pq.top();

    return 0;
}