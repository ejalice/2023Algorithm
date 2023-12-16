# 9명 중 2명을 뽑아서 나머지 합이 100이 되게 하기
# sum(array) - (a1+a2) == 100

array = []
for _ in range(9):
    n = int(input())
    array.append(n)

for i in range(9):
    for j in range(i+1, 9):
        if sum(array) - (array[i]+array[j]) == 100:
            false1 = array[i]
            false2 = array[2]

array.remove(false1)
array.remove(false2)

array.sort()

for i in array:
    print(array[i])