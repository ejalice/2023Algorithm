# SWEA 1204 최빈수구하기
test_case = int(input())
array = list(map(int, input().split()))
# array = [41, 85, 72, 38, 80, 69, 65, 68, 96, 22, 49, 67, 51, 61, 63, 87, 66, 24, 80, 83, 71, 60, 64, 52, 90, 60, 49, 31, 23, 99, 94, 11, 25, 24, 51, 15, 13, 39, 67, 97, 19, 76, 12, 33, 99, 18, 92, 35, 74, 0, 95, 71, 39, 33, 39, 32, 37, 45, 57, 71, 95, 5, 71, 24, 86, 8, 51, 54, 74, 24, 75, 70, 33, 63, 29, 99, 58, 94, 52, 13, 35, 99, 46, 57, 71, 23, 17]

max_num = -1
max_count = 0
for j in range(100):
    j_count = array.count(j)
    if max_count <= j_count:
        max_count = j_count
        max_num = j

print("#%d %d" %(test_case, max_num))