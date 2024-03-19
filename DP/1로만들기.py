x = int(input())


def toOne(x):
    arr = [0] * 30000
    arr[0] = x

    for i in range(1, 30000):
        past_x = arr[i-1]

        minus_one = past_x - 1

        if past_x%5 == 0:
            div_five = past_x//5
        else:
            div_five = past_x

        if past_x%3 == 0:
            div_three = past_x//3
        else:
            div_three = past_x

        arr[i] = min(minus_one, div_five, div_three)

        if arr[i] == 1:
            return i

print(toOne(x))