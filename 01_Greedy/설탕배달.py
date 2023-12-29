# BOJ 2839번
# Silver4
# 반례: 14 = 3*3 + 5*1 => 4

n = int(input())

# 방법1
# def min_sum(n):
#     for num_5 in range(n//5, -1, -1):
#         temp_n = n - 5*num_5
#         if temp_n%3 == 0:
#             return (num_5 + temp_n//3)
#     return -1

# print(min_sum(n))

# 방법2
def min_sum(n):
    if n in [4, 7]:
        return -1
    else:
        return n//5 + (n%5)%3 + (n%5)//3

print(min_sum(n))