# input
def custom_input():    
    # 점 개수
    n = int(input())

    # 좌표
    dot_list = []
    for _ in range(n):
        dot_list.append(list(map(int, input().split())))
    
    return dot_list

# 정렬
def solution(dot_list):
    dot_list.sort(key = lambda x: (x[0], x[1]))
    # dot_sorted = sorted(dot_list, key = lambda x: (x[0], x[1]))
    
    for (x, y) in dot_list:
    # for (x, y) in dot_sorted:
        print("%d %d" %(x, y))

dot_list = custom_input()
solution(dot_list)





