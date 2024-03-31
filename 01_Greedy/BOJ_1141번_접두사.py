# BOJ 1141번
# 접두사
# Silver 1

# a in b로 하면 안됨.
# 1. 길이 순 정렬
# 2. 접두어 확인: 앞부분만 확인하면 됨.
# 2-1. if 0 -> pass
# 2-2. if X -> N - 1

N = int(input())
answer = N
word = []
for _ in range(N):
    word.append(input())

# 길이 기준 정렬
word.sort(key = lambda x: len(x))

for i in range(N): # i: 앞 단어
    for j in range(i+1, N): # j: 뒷 단어
        if word[i] == word[j][:len(word[i])]:
            answer -= 1
            break

print(answer)



