# BOJ 13305번
# 주유소
# Silver 3

N = int(input())
distance = list(map(int, input().split()))
price = list(map(int, input().split()))

min_price = price[0]
total = distance[0] * price[0]

for i in range(1, N-1):
    min_price = min(min_price, price[i])
    total += min_price * distance[i]

print(total)