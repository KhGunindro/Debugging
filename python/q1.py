# Task: Fix the function to correctly reverse the array in place.
def reverse_array(arr):
    for i in range(len(arr)):
        arr[i], arr[len(arr)-i-1] = arr[len(arr)-i-1], arr[i]
    return arr

"""
Test cases:
print(reverse_array([1, 2, 3, 4, 5])) # [5, 4, 3, 2, 1]
print(reverse_array([1, 2, 3, 4])) # [4, 3, 2, 1]
"""