# BOJ 1912번
# 연속합

n = int(input())
dp_table = list(map(int, input().split()))


for i in range(1, n):
    dp_table[i] = max(dp_table[i], dp_table[i-1] + dp_table[i])

print(max(dp_table))