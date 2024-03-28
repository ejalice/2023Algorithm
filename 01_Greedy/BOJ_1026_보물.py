# BOJ 1026번
# 보물
# Silver 4
N = int(input())
A = list(map(int, input().split()))
B = list(map(int, input().split()))

A.sort(reverse=True)
s = 0

for i in range(N):
    b_value = B.pop(B.index(min(B)))
    s += A[i] * b_value

print(s)