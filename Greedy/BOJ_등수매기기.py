# BOJ 2012번
# 등수 매기기
# Silver 3
'''
시간초과 뜰 때 -> 입력받는 방식 변경.
import sys 사용
input() -> sys.stdin.readline()
'''

import sys

n = int(sys.stdin.readline())

predict = []
for _ in range(n):
    predict.append(int(sys.stdin.readline()))

predict.sort()

sum = 0
for i in range(1, n+1):
    sum += abs(predict[i-1] - i)

print(sum)

