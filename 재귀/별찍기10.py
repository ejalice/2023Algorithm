# BOJ 2447번
# 별 찍기 - 10
# Gold 5

n = int(input())

def star(n):
    if n==3:
        return ["***", "* *", "***"]
    stars = []
    initial = star(n//3)

    for i in initial:
        stars.append(i*3)
    for i in initial:
        stars.append(i + ' '*(n//3) + i)
    for i in initial:
        stars.append(i*3)
    return stars


print('\n'.join(star(n)))