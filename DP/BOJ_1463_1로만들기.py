# BOJ 1463번
# 1로 만들기
import sys
inf = sys.maxsize

N = int(input())

dp_table = [inf]*(N+1)
dp_table[1] = 0

for i in range(2, N+1):
    minus_one = dp_table[i-1]+1
    div_three = dp_table[i//3] + 1 if (i%3 == 0) else inf
    div_two = dp_table[i//2] + 1 if (i%2 == 0) else inf

    dp_table[i] = min(minus_one, div_three, div_two)

print(dp_table[N])

