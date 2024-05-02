// BOJ 2805번
// 나무 자르기
// Silver 2

#include <iostream>
#include <algorithm>
using namespace std;

// sum 값이 2,147,483, 648 초과 가능 -> long long 타입으로 설정해주어야 함.
int search(int start, int end, int height[], int N, int M);

int main() {
    int N, M;
    cin >> N >> M;
    int height[N];

    for (int i = 0; i < N; i++) {
        cin >> height[i];
    }
    sort(height, height+N);

    // Ver1) 함수로 빼기.
    int ans = search(0, height[N-1], height, N, M);  

    // Ver2) main 함수 내에서 작동.
    // int ans = 0;
    // int start = 0;
    // int end = height[N-1];
    //  while (start <= end) {
    //     int mid = (start+end) / 2;
    //     long long sum = 0;

    //     for (int i = 0; i < N; i++) {
    //         if (height[i] > mid)
    //             sum += height[i] - mid;
    //     }

    //     if (sum >= M) {
    //         ans = mid;
    //         start = mid + 1;
    //     } else {
    //         end = mid - 1;
    //     }
    // }

    cout << ans;

    return 0;
}

int search(int start, int end, int height[], int N, int M) {
    int ans = 0;

    while (start <= end) {
        int mid = (start+end) / 2;
        long long sum = 0;

        for (int i = 0; i < N; i++) {
            if (height[i] > mid)
                sum += height[i] - mid;
        }

        if (sum >= M) {
            ans = mid;
            start = mid + 1;
        } else {
            end = mid - 1;
        }
    }
    return ans;
}
