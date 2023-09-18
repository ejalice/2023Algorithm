# 이.코.테 pg149
# DFS

# 세로 x 가로
n, m = map(int, input().split())
answer = 0

# 얼음
graph = []
for _ in range(n):
    graph.append(list(map(int, input().split())))

def dfs(x, y):
    if (x < 0 or y < 0 or x > n-1 or y > m-1):
        return False
    if graph[x][y] == 0:
        graph[x][y] = 1
        dfs(x-1, y) # 좌
        dfs(x, y-1) # 상
        dfs(x, y+1) # 하
        dfs(x+1, y) # 우
        return True
    else:
        return False

for i in range(n):
    for j in range(m):
        if dfs(i, j):
            answer += 1

print(answer)