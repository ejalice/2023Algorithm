# BOJ 2178
# Silver 1

from collections import deque

# input
n, m = tuple(map(int, input().split()))
graph = []
for _ in range(n):
  graph.append(list(map(int, input())))

visited = [[False for _ in range(m)] for _ in range(n)]

# 상-하-좌-우
dx = [0, 0, -1, 1]
dy = [1, -1, 0, 0]

# BFS
def bfs(x, y):
    queue = deque([(x, y, 1)])
    visited[x][y] = True

    while queue:
        x, y, distance = queue.popleft()

        if x == n-1 and y == m-1:
            print(distance)
            break
        else:
            for i in range(4):
                nx = x+dx[i]
                ny = y+dy[i]

                if 0 <= nx < n and 0 <= ny < m:
                    if not visited[nx][ny]:
                        if graph[nx][ny] == 1:
                            visited[nx][ny] = True
                            queue.append((nx, ny, distance + 1))
                    

bfs(0, 0)
