# BOJ 14888번
# 연산자 끼워넣기
# Silver 1

n = int(input())
a = list(map(int, input().split()))
plus, minus, mul, div = map(int, input().split())

max_result = -1e9
min_result = 1e9

def backtracking(idx, result, plus, minus, mul, div):
    global max_result, min_result
    if idx == n:
        max_result = max(max_result, result)
        min_result = min(min_result, result)
        return
    
    if plus:
        backtracking(idx+1, result + a[idx], plus-1, minus, mul, div)
    if minus:
        backtracking(idx+1, result - a[idx], plus, minus-1, mul, div)
    if mul:
        backtracking(idx+1, result * a[idx], plus, minus, mul-1, div)
    if div:
        if result < 0:
            backtracking(idx+1, -(result//a[idx]), plus, minus, mul, div-1)
        else:
            backtracking(idx+1, result // a[idx], plus, minus, mul, div-1)

backtracking(1, a[0], plus, minus, mul, div)

print(max_result)
print(min_result)