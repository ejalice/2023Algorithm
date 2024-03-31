# BOJ 1946번
# 신입사원
# Silver 1

# sys 안 쓰면 시간초과 남 -> input은 꼭 readline 사용해서 받기!
import sys
input = sys.stdin.readline

T = int(input())

for _ in range(T):
    N = int(input())
    score = []
    for _ in range(N):
        score.append(list(map(int, input().split())))
    score.sort()
    
    answer = 1

    check = score[0][1]
    for i in range(1, N):
        if score[i][1] < check:
            check = score[i][1]
            answer += 1
    
    print(answer)