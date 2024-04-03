# BOJ 2231번
# 분해 합
# Bronze 2

N = input() # N - String

def f(N):
    for M in range(1, int(N)): # M - int
    # for M in range(int(N)-9*len(N), int(N)): # 이렇게 하면 안됨. 1자릿수일 때 고려를 못함.

        # 자릿수 합
        sum_loc = M + sum(map(int, str(M)))
        
        if sum_loc == int(N):
            return M # M - int
    
    return 0

print(f(N))