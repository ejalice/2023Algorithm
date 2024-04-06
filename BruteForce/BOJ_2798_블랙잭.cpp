// BOJ 2798번
// 블랙잭
// Bronze 2

#include <iostream>
using namespace std;

int BlackJack(int cards[], int N, int M) {
    int max_sum = 0;
    // int N = sizeof(cards)/sizeof(cards[0]);
    // C++ 에서는 동적으로 할당된 배열의 크기를 sizeof 연산자로 계산 불가함.

    for (int i=0; i<N; i++) {  
        for (int j=i+1; j<N; j++) {
            for (int k=j+1; k<N; k++) {
                int tmp = cards[i] + cards[j] + cards[k];

                if (tmp == M)
                    return tmp;
                else if (tmp <= M && tmp > max_sum) {
                    max_sum = tmp;
                }
            }
        }
    }
    return max_sum;
};

int main() {
    int N; // 카드 개수
    int M; // 기준
    cin >> N >> M;

    int cards[N];
    for (int i=0; i < N; i++) {
        scanf("%d", &cards[i]);
    }

    cout << BlackJack(cards, N, M);

    return 0;
}