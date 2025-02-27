# Task: Fix the function to find the maximum value in an array with negative numbers.

def find_max(arr):
    max_val = 0
    for num in arr:
        if num >= max_val:
            max_val = num
    return max_val if arr else None


"""
Test cases:
print(find_max([1, 2, 3, 4, 5])) # 5
print(find_max([1, 2, 3, 4])) # 4
print(find_max([-1, -2, -3, -4, -5])) # -1
"""
