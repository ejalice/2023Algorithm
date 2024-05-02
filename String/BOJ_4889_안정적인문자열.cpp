// BOJ 4889번
// 안정적인 문자열
// Silver 1

#include <iostream>
using namespace std;

int toStable(int number);
int main() {
    int number = 0;
    while (true) {
        int ans = toStable(number);
        number++;
        if (ans != -1) {
            cout << number << ". " << ans << '\n';
        } else {
            break;
        }

    }
    return 0;
}

int toStable(int number) {
    // 문자열 입력받기.
    string data;
    cin >> data;
    int N = data.length();
    int open = 0;
    int close = 0;
    int ans = 0;

    for (int i = 0; i < N; i++) {
        if (data[i] == '{') {
            if (open == N/2) {
                data[i] = '}';
                close++;
                ans++;
            } else {
                open++;
            }
        } else if (data[i] == '}') {
            if (close == open) {
                data[i] = '{';
                open++;
                ans++;
            } else {
                close++;
            }
        } else { // - 입력 -> 입력 종료.
            return -1;
        }
    }
    return ans;
}
