# 이.코.테 pg149
# BFS

from collections import deque

# 세로 x 가로
n, m = map(int, input().split())
answer = 0

# 얼음
graph = []
for _ in range(n):
    graph.append(list(map(int, input().split())))

# BFS
def bfs(x, y):
    if graph[x][y] == 0:
        # que 생성
        que = deque([])
        que.append([x, y])

        graph[x][y] = 1

        while que:
            cx, cy = que.popleft()
             # 주변 체크
            for dx, dy in [(1, 0), (-1, 0), (0, -1), (0, 1)]:
                nx, ny = cx + dx, cy + dy
                
                if 0 <= nx < n and 0 <= ny < m and graph[nx][ny] == 0:
                    graph[nx][ny] = 1
                    que.append([nx, ny])

for i in range(n):
    for j in range(m):
        if graph[i][j] == 0:
            bfs(i, j)
            answer += 1

print(answer)

'''
(x, y) que에 넣기
넣은 값들은 1로 값 변경
주변 (좌, 우, 상, 하) 중 값이 0 인 것은 que에 추가

bfs의 que가 비었을 때 answer += 1
'''