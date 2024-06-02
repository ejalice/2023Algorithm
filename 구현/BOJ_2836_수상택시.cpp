// BOJ 2836번
// 수상 택시
// Gold 3

#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
typedef pair<int, int> line;


int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    long long N, M;
    cin >> N >> M;

    vector<line> v;
    for (int i = 0; i < N; i++) {
        int x, y;
        cin >> x >> y;
        if (x > y)
            v.push_back({y, x});
    }   
    sort(v.begin(), v.end());

    long long answer = 0;

    long long start = 0;
    long long end = 0;

    for (auto& ppl: v) {
        if (end < ppl.first) { // 새로운 선분
            answer += (end-start);
            start = ppl.first;
        }

        if (end < ppl.second) { // 선분 갱신.
            end = ppl.second;
        }
    }

    answer += (end-start);
    answer *= 2; // 왼쪽으로 갔다가 원래 위치로 돌아오기.
    answer += M; // 원래 오른쪽으로 가야하는 길이.

    cout << answer << '\n';

    return 0;
}