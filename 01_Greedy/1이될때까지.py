# N: 수, K:나누는 수
N, K = map(int, input().split())

num = 0
while (N != 1):
    num += 1
    if (N % K == 0):
        N //= K
    else:
        N -= 1

print(num)