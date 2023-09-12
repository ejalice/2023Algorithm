def solution(loc):
    arr = [[0] * 101 for _ in range(101)]
    answer = 0

    for (x, y) in loc:
        for i in range(x, x + 10):
            for j in range(y, y + 10):
                if arr[i][j] != 1:
                    arr[i][j] = 1
                    answer += 1
    print(answer)

# input
n = int(input())
loc = []

for _ in range(n):
    loc.append(tuple(map(int, input().split())))


solution(loc)