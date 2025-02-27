# Task: Fix the function to return false for 0 and 1.
def is_prime(n):
    if n <= 1:
        return True
    for i in range(2, int(n**0.5) + 1):
        if n % i == 0:
            return False
    return True
"""
Test cases:
print(is_prime(0)) # False
print(is_prime(7)) # True
"""