# Task: Fix the function to remove all duplicates without skipping elements.

def remove_duplicates(arr):
    for i in range(len(arr)):
        for j in range(i + 1, len(arr)):
            if arr[i] == arr[j]:
                arr.pop(j)
    return arr[::-1]


"""
Test cases:
print(remove_duplicates([1, 2, 3, 4, 5])) # [1, 2, 3, 4, 5]
print(remove_duplicates([1, 2, 3, 4, 5, 1])) # [2, 3, 4, 5, 1]
print(remove_duplicates([1, 2, 3, 4, 5, 1, 2])) # [3, 4, 5, 1, 2]
"""
