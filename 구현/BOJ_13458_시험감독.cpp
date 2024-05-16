// BOJ 13458번
// 시험 감독
// Bronze 2

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int N;
vector<int> A;
int B, C;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> N;

    for (int i = 0; i < N; i++) {
        int data;
        cin >> data;
        A.push_back(data);
    }

    cin >> B >> C;

    long long member = 0;

    for (int i = 0; i < N; i++) {
        member++; // 총 감독 1명 배정.
        A[i] -= B;

        if (A[i] > 0) {
            if (A[i] % C == 0) {
                member += A[i] / C;
            } else {
                member += A[i] / C + 1;
            }
        }
    }

    cout << member << endl;

    return 0;
}