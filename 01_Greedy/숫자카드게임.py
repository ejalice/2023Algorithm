# n, m get input separated by space
n, m = map(int, input().split())

result = 0
for i in range(n):
    data = list(map(int, input().split()))

    # smallest in the row
    min_value = min(data)
    # biggest in the columns
    result = max(result, min_value)
    
print(result)

# # N: 행, M: 열
# N, M = map(int, input().split())

# # 2차원 배열
# data = []
# for i in range (N):
#     data.append(list(map(int, input().split())))

# for y in range(N):
#     if y == 0:
#         max = min(data[y])
#         print("y=0, max=%d" %max)
#     elif min(data[y-1]) < min(data[y]):
#         max = min(data[y])
#         print("y=%d, max=%d" %(y, max))

# print(max)
