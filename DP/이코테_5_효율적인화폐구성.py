N, M = map(int, input().split())
value = []
for _ in range(N):
    value.append(int(input()))

dp = [10001]*(M+1)
dp[0] = 0
value.sort(reverse=True)

for i in range(value[0], M+1):
    for k in value:
        if dp[i-k] != 1001:
            dp[i] = min(dp[i], dp[i-k] + 1)

if dp[M] == 1001:
    print(-1)
else:
    print(dp[M])