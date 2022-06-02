    # 기본 문제✔ 	2309 	일곱 난쟁이

# def brute_force(array, length, sum):
#     for j in range(length):
#         for k in range(length):
#             if array[j] + array[k] == sum:
#                 return [j, k]

# arr = list()
# sum = 0
# for i in range(9):
#     arr.append(int(input()))
#     sum += arr[i]

# sum-=100
# arr.sort()  
# idx = brute_force(arr, 9, sum)

# arr.pop(max(idx))
# arr.pop(min(idx))

# print(*arr, sep="\n")


    # 기본 문제✔ 	10093 	숫자

# from_to = list(map(int, input().split()))
# a = min(from_to)
# b = max(from_to)

# print(b - (a + 1)) if a != b else print(0)    # handles edge cases (ex. "10 10")
# for i in range(a + 1, b):
#   print(i, end=" ")

