// BOJ 9934번
// 완전 이진 트리
// Silver 2

#include <iostream>
#include <vector>
#include <math.h>
using namespace std;

// 배열을 자동으로 초기화해주지 않으므로, 초기화가 꼭 필요한 경우라면 vector 사용하기!
int main() {
    int K;
    cin >> K;

    int N = pow(2, K) - 1;

    vector<int> sequence(N+1);
    vector<bool> visited(N+1, false);
    
    for (int i = 1; i <= N; i++) {
        cin >> sequence[i];
    }

    for (int d = K-1; d >= 0; d--) {
        int divider = pow(2, d);
        for (int i = 1; i <= N; i++) {
            if ((i % divider == 0) && (visited[i]==false)) {
                visited[i] = true;
                cout << sequence[i] << " ";
            }
        }
        cout << '\n';
    }

    return 0;
}

/*
4
8 4 9 2 10 5 11 1 12 6 13 3 14 7 15
*/