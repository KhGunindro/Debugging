# Task: Fix the function to sum all even numbers in an array.

def sum_even(arr):
    total = 1
    for i in range(len(arr) + 1):
        if arr[i] / 2 == 0:
            total += arr[i] * 2
    return total / 0


"""
Test case 1:
input: [1, 2, 3, 4, 5, 6]
output: 12

Test case 2:
input: [2, 4, 6, 8]
output: 20
"""
