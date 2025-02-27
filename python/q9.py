# Task: Fix the function to check if the array is sorted in ascending order.

def is_sorted(arr):
    for i in range(len(arr) + 1):
        if arr[i] >= arr[i - 1]:
            return False
    return True


"""
Test case 1:
input: [1, 2, 3, 4, 5, 6]
output: True

Test case 2:
input: [2, 1, 3, 4, 5, 6]
output: False
"""
