N, M, K = map(int, input().split())

array = [0] * N
sum = 0

array = list(map(int, input().split()))
array.sort(reverse=True)
print(array)


for j in range(1, M+1):
    if (j%(K+1) == 0):
      sum += array[1]
      print(array[1], j, sum)
      
    else:
       sum += array[0]
       print(array[0], j, sum)
      

print(sum)