// BOJ 1475번
// 방 번호
// Silver 5

#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    string N;
    cin >> N;

    int numArr[9] = {0,};

    for (auto& ch: N) {
        int number = ch - '0';
        if (number == 9)
            number = 6;
        numArr[number] += 1;
    }

    if (numArr[6] % 2 == 0) {
        numArr[6] = numArr[6] / 2;
    } else {
        numArr[6] = numArr[6] / 2 + 1;
    }

    // int result = nummArr[0];
    // for (int i = 1; i < 9; i++) {
    //     result = max(result, numArr[i]);
    // }
    int result = *max_element(numArr, numArr+9);
    cout << result << endl;

    return 0;
}