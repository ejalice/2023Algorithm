# BOJ 9237번
# Silver5

n = int(input())
T = list(map(int, input().split()))
T.sort(reverse=True)

plant_end = 1
last_date = -1

for i in range(n):
    plant_end += 1
    growth_end = plant_end + T[i]
    last_date = max(last_date, growth_end)

print(last_date)