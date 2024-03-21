# BOJ 2193번
# 이친수

N = int(input())

dp_table = [0] * (N+1)
dp_table[1] = 1
# N이 1일 경우 dp_table[2], -[3]은 존재하지 않으므로 바로 설정해주면 안됨.

for i in range(2, N+1): 
    dp_table[i] = dp_table[i-2] + dp_table[i-1]

print(dp_table[N])