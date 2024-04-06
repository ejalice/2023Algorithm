// BOJ 2231번
// 분해합
// Bronze 2

#include <iostream>
using namespace std;


int decomposition(int N) {
    for (int M = 1; M < N; M++) {
        int sum = M;
        int temp = M;

        while (temp > 0) {
            sum += temp%10;
            temp /= 10;
        }

        if (sum == N)
            return M;  
    }
    return 0;
}

int main() {
    int N;
    cin >> N;

    cout << decomposition(N);

    return 0;
}