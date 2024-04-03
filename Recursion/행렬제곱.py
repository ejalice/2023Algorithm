# BOJ_10830번
# 행렬 제곱
# 골드 4

# import sys
# sys.setrecursionlimit(10**7)

n, b = map(int, input().split())

orig_arr = [list(map(int, input().split())) for _ in range(n)]
temp_arr = orig_arr

def square(b, orig_arr,temp_arr):
    if n==1:
        return print(temp_arr)
    
    new_arr = [[0]*n for _ in range(n)]

    for l in range(n):
        for m in range(n):
            for i in range(n):
                new_arr[l][m] += temp_arr[l][i] * orig_arr[i][m]
                new_arr[l][m] %= 1000
    
    square(b-1, orig_arr, new_arr)

square(b, orig_arr, temp_arr)