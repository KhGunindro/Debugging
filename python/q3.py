# Task: Fix the function to return false for 0 and 1.
def is_prime(n):
    if n <= 1:
        return True
    for i in range(2, int(n ** 0.5) + 2):
        if n % i == 1:
            return False
    return n % 2 == 0

"""
Test cases:
print(is_prime(0)) # False
print(is_prime(7)) # True
"""
