# BOJ 15650번
# N과 M(2)
# Silver 3

n, m = map(int, input().split())
result = []

def backtracking(start):
    if len(result) == m: # 재귀 종료
        print(' '.join(map(str, result)))
        return
    
    for i in range(start, n+1):
        if i in result:
            continue

        result.append(i)
        backtracking(i+1)
        result.pop()
    
backtracking(1)