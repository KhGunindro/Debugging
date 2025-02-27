# Task: Fix the function to check if a string is a palindrome.

def is_palindrome(s):
    left, right = 0, len(s) - 1
    while left < right:
        if s[left] != s[right]:
            return False
        left += 1  # BUG: Right not updated
    return True

"""
    Test case 1:
    input: 'racecar'
    output: True

    Test case 2:
    input: 'hello'
    output: False
"""