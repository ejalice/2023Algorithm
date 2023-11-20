n, k = map(int, input().split())
arr = list(map(int, input().split()))

arr.sort()

max_count = 1
for i in range(n):
    max_num = arr[i] + (k+1)
    count = 0

    for num in range(1, n):
        if arr[num] < max_num:
            count += 1

    max_count = max(count, max_count)

print(max_count)