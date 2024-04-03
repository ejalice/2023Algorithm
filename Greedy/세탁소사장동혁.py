# BOJ 2720번

T = int(input())
TC = []

for _ in range(T):
    TC.append(int(input()))

def get_count(c):
    q = c // 25
    c %= 25

    d = c // 10
    c %= 10

    n = c // 5
    c %= 5

    p = c

    return (q, d, n, p)

for c in TC:
    q, d, n, p = get_count(c)
    print("%d %d %d %d" %(q, d, n, p))