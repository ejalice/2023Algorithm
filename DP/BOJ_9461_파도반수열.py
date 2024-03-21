# BOJ 9461번
# 파도반 수열

T = int(input())
test_case = []
for _ in range(T):
    test_case.append(int(input()))
max_test_case = max(test_case)


P = [0]*(max_test_case + 1)
P[1] = 1
P[2] = 1
P[3] = 1
P[4] = 2
P[5] = 2

for i in range(6, max_test_case + 1):
    P[i] = P[i-1] + P[i-5]

for N in test_case:
    print(P[N])
