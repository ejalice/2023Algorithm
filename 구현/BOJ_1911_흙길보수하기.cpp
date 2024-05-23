// BOJ 1911번
// 흘길 보수하기

#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
typedef pair<int, int> water;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int answer = 0;

    int N, L;
    cin >> N >> L;

    vector<water> holes;
    for (int i = 0; i < N; i++) {
        int x, y;
        cin >> x >> y;
        holes.push_back({x, y});
    }

    sort(holes.begin(), holes.end());

    int end = holes[0].first;

    for (int i = 0; i < N; i++) {
        int x = holes[i].first;
        int y = holes[i].second;
        int c;

        if (end <= x) {
            if ((y-x)%L == 0)
                c = (y-x)/L;
            else
                c = (y-x)/L + 1;
            
            end = x + L*c;
            answer += c;
        } else if (x <= end && end <= y) {
            if ((y-end)%L == 0)
                c = (y-end)/L;
            else
                c = (y-end)/L + 1;
            
            end = end + L*c;
            answer += c;
        }
    }

    cout << answer << '\n';

    return 0;
}