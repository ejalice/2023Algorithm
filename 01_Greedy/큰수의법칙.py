# N, M, K get input separated by space
N, M, K = map(int, input().split())

# Get N input separated by space
array = list(map(int, input().split()))

array.sort() # sort
first = array[N-1] # First Biggest
second = array[N-2] # Second Biggest

# Calculate the most biggest multiplied.
firstMulti = int(M/(K+1)) * 3
firstMulti += M%(K+1)

sum = 0
sum += firstMulti * first # First
sum += (M - firstMulti) * second # Second

print(sum)



# N, M, K = map(int, input().split())

# array = [0] * N
# sum = 0

# array = list(map(int, input().split()))
# array.sort(reverse=True)
# print(array)


# for j in range(1, M+1):
#     if (j%(K+1) == 0):
#       sum += array[1]
#       print(array[1], j, sum)
      
#     else:
#        sum += array[0]
#        print(array[0], j, sum)
      

# print(sum)

