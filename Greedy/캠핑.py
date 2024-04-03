# BOJ 4796번
# Bronze 1
'''
- L%P가 L보다 큰 경우 주의 요망.
- 반례: L, P, V = 2, 7, 10
'''
TC = []

while True:
    L, P, V = map(int, input().split())

    if (L, P, V) == (0, 0, 0):
        break
    else:
        TC.append((L, P, V))

index =1
for (L, P, V) in TC:
    answer = (V//P)*L
    if (V%P) > L:
        answer += L
    else:
        answer += V%P
    
    
    print("Case %d: %d" %(index, answer))
    index += 1
