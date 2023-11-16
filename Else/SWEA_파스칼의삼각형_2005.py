# SWEA 2005 파스칼의 삼각형

N = int(input())
# N = 4

arr = [[0 for j in range(i+1)] for i in range(N)]
arr[0] = [1]

for i in range(1, N):
    for j in range(i+1):
        if j==0 or j==i:
            arr[i][j] = 1
        else:
            arr[i][j] = arr[i-1][j-1] + arr[i-1][j]

for i in range(0, N):
    # print("#%d"%(test_case))

    for j in range(i+1):
        print(arr[i][j], end= " ")
    print(" ")
    