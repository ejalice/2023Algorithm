# BOJ 11399번
# Silver4

n = int(input())
p = list(map(int, input().split()))

p.sort()

total_t = 0
for i in range(n):
    total_t += p[i]*(n-i)

print(total_t)