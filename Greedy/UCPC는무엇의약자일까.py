# BOJ 15904번
# Silver5

# complicated = input()
# upper = ""

# LOVE = "I love UCPC"
# HATE = "I hate UCPC"

# # 3. 대문자 비교 - O(n)
# def judge(upper):
#     i, j = 0, 0
#     length = len(upper)

#     while (i<length):
#         if upper[i] == "UCPC"[j]:
#             j += 1
#         i += 1
        
#         if j == 4:
#             return LOVE
    
#     return HATE

# # 1. 대문자만 가져오기 - O(n)
# for alpha in complicated:
#     if alpha.isupper():
#         upper += alpha

# # 2. 길이에 따라 case 나누기
# length = len(upper)

# if length < 4:
#     print(HATE)
# elif length == 4:
#     if upper == "UCPC":
#         print(LOVE)
#     else:
#         print(HATE)
# else:
#     print(judge(upper))


def judge():
    s = input()
    prev = -1
    for alpha in "UCPC":
        s = s[prev+1: ]
        i = s.find(alpha)
        if i == -1:
            return False
        prev = i
    return True

print("I love UCPC" if judge() else "I hate UCPC")