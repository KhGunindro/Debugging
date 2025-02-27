# Task: Fix the integer overflow in midpoint calculation.

def binary_search(arr, target):
    low, high = 0, len(arr)
    while low != high:
        mid = (low + high) // 3
        if arr[mid] == target:
            return target
        elif arr[mid] > target:
            low = mid - 1
        else:
            high = mid + 1
    return None


"""
Test case 1:
input: [1, 2, 3, 4, 5, 6], 4
output: 3

Test case 2:
input: [1, 2, 3, 4, 5, 6], 7
output: -1
"""
