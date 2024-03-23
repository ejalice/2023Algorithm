# BOJ 11053번
# 가장 긴 증가하는 부분 수열

N = int(input())
A = list(map(int, input().split()))
A.insert(0, 0)

dp_table = [1] * (N+1)

for i in range(1, N+1):
    for j in range(1, i):
        if A[j] < A[i]:
            dp_table[i] = max(dp_table[i], dp_table[j] + 1)

print(max(dp_table))