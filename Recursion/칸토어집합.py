# BOJ 4779번
# 칸토어 집합
# Silver 3

def cant(arr, n, first, end):
    if n == 0:
        return
    else:
        a = int(first + (end-first+1)/3)
        b = int(first + (end-first+1)/3*2)
        for i in range(a, b):
            arr[i] = ' '

        cant(arr, n-1, first, first+(end-first+1)/3-1)
        cant(arr, n-1, first+(end-first+1)/3*2, end)


while True:
    try:
        n = int(input())
        arr = ['-']*(3**n)
        cant(arr, n, 0, 3**n-1)    
        print(''.join(arr))
    except:
        break