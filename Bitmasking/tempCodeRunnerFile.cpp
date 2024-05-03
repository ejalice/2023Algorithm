#include <iostream>
using namespace std;

int N;
int taste[11][2];
int ans = INT_MAX;

void food(int index, int totalS, int totalB);
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    // Input
    cin >> N;
    for (int i = 1; i <= N; i++) {
        cin >> taste[i][0] >> taste[i][1];
    }

    for (int i = 1; i <= N; i++) {
        food(i, 1, 0);
    }
    cout << ans;

    return 0;
}

void food(int index, int totalS, int totalB) {
    if (index > N) return;

    if (totalB == 0) {
        ans = min(ans, abs(taste[index][0] - taste[index][1]));
        food(index+1, taste[index][0], taste[index][1]);
    } else {
        int tmp_S = totalS * taste[index][0];
        int tmp_B = totalB + taste[index][1];

        ans = min(ans, abs(tmp_S - tmp_B));

        food(index+1, totalS, totalB); // 선택하지 않은 경우
        food(index+1, tmp_S, tmp_B); // 선택한 경우
    }
    return;
}