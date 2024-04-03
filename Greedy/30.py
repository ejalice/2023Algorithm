# BOJ 10610번
# Silver4

n = input()

if "0" not in n:
    print(-1)
else:
    num_sum = 0
    for chr in n:
        num_sum += int(chr)
    
    if num_sum %3 != 0:
        print(-1)
    else:
        sorted_n = sorted(n, reverse=True)
        answer = "".join(sorted_n)
        print(answer)

# def has_zero(n): # 10의 배수
#     if "0" in n:
#         return True
#     return False

# def is_multi_three(n): # 3의 배수
#     n_sum = 0
#     for chr in n:
#         n_sum += int(chr)
    
#     if n_sum % 3 == 0:
#         return True
#     return False

# def answer(n):
#     n_sorted = sorted(n, reverse=True)
#     result = "".join(n)
#     return result


# def judge(n):
#     if has_zero(n):
#         if is_multi_three(n):
#             return answer(n)
#         else:
#             return -1
#     else:
#         return -1

# n = input()
# judge(n)