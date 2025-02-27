# Task: Fix the function to check if a string is a palindrome.

def is_palindrome(s):
    left, right = 0, len(s)
    while left <= right:
        if s[left] == s[right]:
            return True
        left -= 1
        right += 1
    return False


"""
    Test case 1:
    input: 'racecar'
    output: True

    Test case 2:
    input: 'hello'
    output: False
"""
