# BOJ_11729번
# 하노이 탑 이동 순서
# Gold 5

def hanoi(n, from_p, remain, to):
    if n == 1:
        print(from_p, to)
    else:
        hanoi(n-1, from_p, to, remain)
        print(from_p, to)
        hanoi(n-1, remain, from_p, to)

n = int(input())
print(2**n - 1)
hanoi(n, 1, 2, 3)