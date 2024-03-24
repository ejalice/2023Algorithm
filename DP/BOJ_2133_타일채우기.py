# BOJ 2133번
# 타일 채우기
# Gold 5

N = int(input())

dp_table = [0] * (31)
dp_table[2] = 3

for i in range(4, N+1):
    if i % 2 == 0:
        dp_table[i] = 3*dp_table[i-2] + 2*sum(dp_table[:i-2:2]) + 2

print(dp_table[N])
