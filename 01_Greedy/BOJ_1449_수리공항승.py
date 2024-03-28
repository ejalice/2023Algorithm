# BOJ 1449번
# 수리공 항승
# Silver 3

N, L = map(int, input().split())
loc = list(map(int, input().split()))
loc.sort()

count = 1
current = loc[0]

for location in loc:
    if location in range(current, current + L):
        continue
    else:
        count += 1
        current = location

print(count)
