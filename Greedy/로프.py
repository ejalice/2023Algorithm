# BOJ 2217번
# 로프
# Sliver4

# 1. 입력
n = int(input())
w = []
for _ in range(n):
    w.append(int(input()))

# 2. 정렬
w.sort()

# 3. 계산
max_w = -1
for i in range(n):
    max_w = max(max_w, w[i]*(n-i))

print(max_w)
