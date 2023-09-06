def solution(nums):
    return min(len(set(nums)), len(nums)/2)

# def solution(nums):
#     print(set(nums))
#     answer = len(set(nums))

#     if answer > len(nums)/2:
#         return len(nums)/2
#     else:
#         return answer

nums = [3, 3, 3, 2, 2, 2]
print(solution(nums))
