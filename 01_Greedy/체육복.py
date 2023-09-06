# Programmers

def solution(n, lost, reserve):
    lost.sort()
    reserve.sort()

    new_reserve = [r for r in reserve if r not in lost]
    new_lost = [l for l in lost if l not in reserve]

    for r in new_reserve:
        if (r-1) in new_lost:
            new_lost.remove(r-1)
        elif (r+1) in new_lost:
            new_lost.remove(r+1)
    answer = n - len(new_lost)
    return answer

# 오답2: 새로운 reserve 정의해줘야함, 안그러면 루프 계속돌아가 수 있음.
# def solution(n, lost, reserve):
#     lost.sort()
#     reserve.sort()

#     for x in reserve:
#         if x in lost:
#             reserve.remove(x)
#             lost.remove(x)

#     for i in reserve:
#         if (i != 1 and (i-1) in lost):
#             lost.remove(i-1)
#         # 뒷 사람이 도난당했을 경우
#         elif (i+1) in lost:
#             lost.remove(i+1) 
    
    # 오답1: reseve, lost 공통 숫자 먼저 제거해줘야함.
    # for i in reserve:
    #     # 2개 있는 사람이 도난 당했을 경우
    #     if (i in lost):
    #         lost.remove(i)
    #         print("1 removed: ", i)
    #         print("lost: ", lost)        
    #     # 앞 사람에게 빌려줄 경우
    #     elif (i != 1 and (i-1) in lost):
    #         lost.remove(i-1)
    #         print("2 removed: ", i-1)
    #         print("lost: ", lost)
    #     # 뒷 사람이 도난당했을 경우
    #     elif (i+1) in lost:
    #         lost.remove(i+1)
    #         print("3 removed: ", i+1)
    #         print("lost: ", lost) 
    # answer = n - len(lost)
    # return answer
        
n = 6
lost = [1, 3, 5, 6]
reserve = [4, 6]
print(solution(n, lost, reserve))