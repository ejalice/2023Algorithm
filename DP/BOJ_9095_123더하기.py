# BOJ 9095번
# 1, 2, 3 더하기

T = int(input())
test_case = []

for _ in range(T):
    test_case.append(int(input()))

dp_table =[0] * 11
dp_table[1] = 1
dp_table[2] = 2
dp_table[3] = 4

for i in range(4, 11):
    dp_table[i] = dp_table[i-1] + dp_table[i-2] + dp_table[i-3]

for n in test_case:
    print(dp_table[n])