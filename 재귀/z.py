# BOJ 1074번
# Z
# Silver 1

def z(n, r, c, loc):
    if n == 1:
        if r==0 and c==1:
            loc += 1
        elif r==1 and c==0:
            loc += 2
        elif r==1 and c==1:
            loc += 3
        
        print(loc)

    
    else:
        if r < 2**(n-1) and c < 2**(n-1): # 1사분면
            quar = 1 
        elif r < 2**(n-1) and c >= 2**(n-1): # 2사분면
            quar = 2
            c -= 2**(n-1)
        elif r >= 2**(n-1) and c < 2**(n-1): # 3사분면
            quar = 3
            r -= 2**(n-1)
        else: # 4사분면
            quar = 4
            c -= 2**(n-1)
            r -= 2**(n-1)
    
        loc += (quar - 1)*(2**(2*n-2))
        z(n-1, r, c, loc)

n, r, c = map(int, input().split())
loc = 0
z(n, r, c, loc)