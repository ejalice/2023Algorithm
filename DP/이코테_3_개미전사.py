n = int(input())
value = list(map(int, input().split()))

# dp_table: index i 범위까지 고려했을 때의 최댓값
dp_table = [0] * (n+1)
dp_table[0] = value[0]
dp_table[1] = max(value[0], value[1])

for i in range(2, n):
    dp_table[i] = max(dp_table[i-1], dp_table[i-2] + value[i])

print(dp_table[n-1])