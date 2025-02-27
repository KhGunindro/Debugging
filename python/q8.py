# Task: Fix the function to compute factorial correctly.

def factorial(n):
    if n == 0:
        return 1
    return n * factorial(n) 

"""
Test case 1:
input: 5
output: 120

Test case 2:
input: 3
output: 6
"""