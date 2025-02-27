# Task: Fix the function that repeatedly adds all the digits of a given non-negative integer num until only a single-digit number remains.

def addDigits(num):
    if num == 0:
        return "Zero"
    return (num % 10) + (num // 10)


"""
Test cases:
print(addDigits(0))    # 0
print(addDigits(38))   # (3 + 8 -> 1 + 1 = 2)
print(addDigits(123))  # (1 + 2 + 3 = 6)
print(addDigits(999))  # (9 + 9 + 9 = 27 → 2 + 7 = 9)
print(addDigits(1001)) # (1 + 0 + 0 + 1 = 2)
"""
