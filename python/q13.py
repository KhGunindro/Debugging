# Task: Fix the function to print a centered pyramid pattern with correct spacing.

def print_pyramid(rows):
    for i in range(rows):
        line = ' ' * i 
        line += '*' * (2 * i + 1)
        print(line)

print_pyramid(3)
"""
Test cases 1:
print_pyramid(3)
Output:
    *
   ***
  *****
"""