# BOJ 2096번
# 내려가기
# Gold 5

N = int(input())

value = list(map(int, input().split()))
M = value.copy()
m = value.copy()

for _ in range(N-1):
    value = list(map(int, input().split()))

    M = [value[0] + max(M[0], M[1]), value[1] + max(M), value[2] + max(M[1], M[2])]
    m = [value[0] + min(m[0], m[1]), value[1] + min(m), value[2] + min(m[1], m[2])]

print(max(M), min(m))