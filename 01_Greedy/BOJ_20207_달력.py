# BOJ 20207번
# 달력
# Gold 5

N = int(input())

calender = [0]*367

for _ in range(N):
    s, e = map(int, input().split())
    for i in range(s, e+1):
        calender[i] += 1

# 넓이 += (연속으로 1이상인 길이) * 최댓값
start = 0
end = 0
answer = 0
height = 0

for i in range(1, 367):
    if calender[i] == 0: # ~ 0 ~
        if calender[i-1] != 0:
            answer += (end - start + 1) * height
    else: # 1
        if calender[i-1] != 0: # ~ 1 1 ~
            end = i
            height = max(height, calender[i])
        else: #calender[i-1] == 0: # ~ 0 1 ~
            start = i
            end = i
            height = calender[i]
            
print(answer)