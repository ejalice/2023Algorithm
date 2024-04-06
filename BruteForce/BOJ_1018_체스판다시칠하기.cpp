// BOJ 1018번
// 체스판 다시 칠하기
// Silver 4

#include <iostream>
using namespace std;

string WB[8] = {
    "WBWBWBWB",
    "BWBWBWBW",
    "WBWBWBWB",
    "BWBWBWBW",
    "WBWBWBWB",
    "BWBWBWBW",
    "WBWBWBWB",
    "BWBWBWBW"
};

string BW[8] = {
    "BWBWBWBW",
    "WBWBWBWB",
    "BWBWBWBW",
    "WBWBWBWB",
    "BWBWBWBW",
    "WBWBWBWB",
    "BWBWBWBW",
    "WBWBWBWB"
};

string board[50];

int BW_count(int x, int y) {
    int cnt = 0;
    for (int i= 0; i < 8; i++) {
        for (int j=0; j<8; j++) {
            if (board[x+i][y+j] != BW[i][j])
                cnt++;
        }
    }
    return cnt;
}

int WB_count(int x, int y) {
    int cnt = 0;
    for (int i= 0; i < 8; i++) {
        for (int j=0; j<8; j++) {
            if (board[x+i][y+j] != WB[i][j])
                cnt++;
        }
    }
    return cnt;
}

int main() {
    int size[2];
    int cnt;
    int min_val = 12345;
    pair<int, int> p1;

    cin >> p1.first >> p1.second;
    for (int i = 0; i<p1.first; i++) {
        cin >> board[i];
    }

    for (int i= 0; i+8 <= p1.first; i++) {
        for (int j=0; j+8 <= p1.second; j++) {
            int tmp;
            tmp = min(WB_count(i, j), BW_count(i, j));
            if (tmp < min_val)
                min_val = tmp;
        }
    }

    cout << min_val;
    return 0;
}