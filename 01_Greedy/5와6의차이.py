# BOJ 2864번
# Bronze2

# 방법1
A, B = input().split()

min_sum = int(A.replace('6', '5')) + int(B.replace('6', '5'))
max_sum = int(A.replace('5', '6')) + int(B.replace('5', '6'))

print(min_sum, max_sum)

# 방법2
# A, B = map(list, input().split())

# def make_min(K):
#     new_K = ""
#     for i in K:
#         if i == '6':
#             i = '5'
#         new_K += i
#     return int(new_K)

# def make_max(K):
#     new_K = ""
#     for i in K:
#         if i == '5':
#             i = '6'
#         new_K += i
#     return int(new_K)

# min_sum = make_min(A) + make_min(B)
# max_sum = make_max(A) + make_max(B)

# print(min_sum, max_sum)