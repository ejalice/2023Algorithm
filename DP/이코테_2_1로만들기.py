# 방법2)
import sys
x = int(input())
inf = sys.maxsize

def toOne(x):
    table = [0] * (x+1)

    for i in range(2, x+1):
        minus_one = table[i-1] + 1
        div_five = table[i//5]+1 if i%5 == 0 else inf
        div_three = table[i//3]+1 if i%3 ==0 else inf
        div_two = table[i//2]+1 if i%2 ==0 else inf

        table[i] = min(minus_one, div_five, div_three, div_two)

    return table[x]
        

print(toOne(x))

# 방법1)
# x = int(input())


# def toOne(x):
#     arr = [0] * 30000
#     arr[0] = x

#     for i in range(1, 30000):
#         past_x = arr[i-1]

#         minus_one = past_x - 1

#         if past_x%5 == 0:
#             div_five = past_x//5
#         else:
#             div_five = past_x

#         if past_x%3 == 0:
#             div_three = past_x//3
#         else:
#             div_three = past_x

#         arr[i] = min(minus_one, div_five, div_three)

#         if arr[i] == 1:
#             return i

# print(toOne(x))