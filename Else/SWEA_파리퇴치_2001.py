# 기본 제공코드는 임의 수정해도 관계 없습니다. 단, 입출력 포맷 주의
'''
      아래의 구문은 input.txt 를 read only 형식으로 연 후,
      앞으로 표준 입력(키보드) 대신 input.txt 파일로부터 읽어오겠다는 의미의 코드입니다.
      여러분이 작성한 코드를 테스트 할 때, 편의를 위해서 input.txt에 입력을 저장한 후,
      아래 구문을 이용하면 이후 입력을 수행할 때 표준 입력 대신 파일로부터 입력을 받아올 수 있습니다.

      따라서 테스트를 수행할 때에는 아래 주석을 지우고 이 구문을 사용하셔도 좋습니다.
      아래 구문을 사용하기 위해서는 import sys가 필요합니다.

      단, 채점을 위해 코드를 제출하실 때에는 반드시 아래 구문을 지우거나 주석 처리 하셔야 합니다.
'''
#import sys
#sys.stdin = open("input.txt", "r")

T = int(input())
# 여러개의 테스트 케이스가 주어지므로, 각각을 처리합니다.
for test_case in range(1, T + 1):
    N, M = map(int, input().split())
    array = [list(map(int, input().split())) for _ in range(N)]

    max = 0

    for i in range(N-(M-1)):
        for j in range(N-(M-1)):
            maxCand = 0
            for x in range(M):
                for y in range(M):
                    maxCand += array[i+x][j+y]
            if maxCand > max:
                max = maxCand

    print("#%d %d" %(test_case, max))



# N, M = map(int, input().split())

# array = []
# for _ in range(N):
#     array.append(list.map(int, input().split))

# N, M = 5, 2
# array = [[1, 3, 3, 6, 7],
#          [8, 13, 9, 12, 8],
#          [4, 16, 11, 12, 6],
#          [2, 4, 1, 23, 2],
#          [9, 13, 4, 7, 3]
# ]

# max = 0

# for i in range(N-(M-1)):
#     for j in range(N-(M-1)):
#         maxCand = 0
#         for x in range(M):
#             for y in range(M):
#                 maxCand += array[i+x][j+y]
#         if maxCand > max:
#             max = maxCand

# print(max)