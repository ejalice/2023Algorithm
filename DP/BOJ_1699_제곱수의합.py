import sys
import math
inf = sys.maxsize

N = int(input())

dp_table = [inf]*(N+1)
dp_table[0] = 0
dp_table[1] = 1

for i in range(2, N+1):
    print(i, int(math.sqrt(i)+1))
    for j in range(1, int(math.sqrt(i)+1)):
        
        dp_table[i] = min(dp_table[i], dp_table[i-j*j] + 1)

print(dp_table[N])

