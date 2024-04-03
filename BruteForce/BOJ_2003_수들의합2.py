# BOJ 2003번
# 수들의 합2
# Silver 4

N, M = map(int, input().split())
A = list(map(int, input().split()))

ans = 0
left = 0
right = 0

while left < right:
    sum = sum(A[left: right+1])
    if sum == M:
        ans += 1
        right += 1
    elif sum > M:
        left += 1
    else:
        right += 1

print(ans)
