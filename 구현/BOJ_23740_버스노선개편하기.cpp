// BOJ 23740
// 버스 노선 개편하기
// Gold5

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
typedef pair<int, int> line;
typedef pair<line, int> bus;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int N;
    cin >> N;

    vector<bus> v;
    for (int i = 0; i < N; i++) {
        int S, E, C;
        cin >> S >> E >> C;
        v.push_back({{S, E}, C});
    }

    sort(v.begin(), v.end());

    vector<bus> newV;
    newV.push_back({{v[0].first.first, v[0].first.second}, v[0].second});

    for (int i = 1; i < N; i++) {
        int s = v[i].first.first;
        int e = v[i].first.second;
        int c = v[i].second;

        if (newV.back().first.second < s) {
            newV.push_back(v[i]);
        }  else if (newV.back().first.first < e && newV.back().first.second < e){
            newV.back().first.second = e;
            newV.back().second = min(newV.back().second, c);
        }
    }

    cout << newV.size() << endl;
    for (const auto &bus : newV) {
        cout << bus.first.first << " " << bus.first.second << " " << bus.second << '\n';
    }

    return 0;
}