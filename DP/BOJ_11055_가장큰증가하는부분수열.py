# BOJ 11055번
# 가장 큰 증가하는 부분 수열
# Silver2

N = int(input())
A = list(map(int, input().split()))
dp_table = [0] * N
dp_table[0] = A[0]

for i in range(N):
    for j in range(i):
        if A[i] > A[j]:
            dp_table[i] = max(dp_table[i], dp_table[j] + A[i])
        else:
            dp_table[i] = max(dp_table[i], A[i])

print(max(dp_table))