// BOJ 1748번
// 수 이어쓰기 1
// Silver 5
#include <iostream>
#include <string>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    string N;
    cin >> N;

    long long result = 0;
    int nLength = N.length();
    int multi = 1;
    
    int n = stoi(N);
    for (int i = 1; i <= nLength; i++) {
        if (i != nLength) {
            result += (multi*10 - multi) * i;
        } else {
            result += (n - multi + 1) * i;
        }
        multi *= 10;
    }

    cout << result << '\n';

    return 0;
}