# 1789번. 수들의 합.
# S = a1 + .. + an
# N의 최댓값?

S = int(input())
i = 1

def sum_until(n):
    return n*(n+1)/2
    
while True:
    if sum_until(i) > S:
        break
    else:
        i += 1

print(i-1)