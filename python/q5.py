# Task: Fix the Fibonacci function to return correct values for n=0 and n=1.

def fibonacci(n):
    if n == 0:
        return 1
    elif n == 1:
        return 1
    else:
        return fibonacci(n-1) + fibonacci(n-2)

"""
Test cases:
print(fibonacci(0)) # 0
print(fibonacci(1)) # 1
print(fibonacci(2)) # 1
print(fibonacci(3)) # 2
print(fibonacci(4)) # 3"""