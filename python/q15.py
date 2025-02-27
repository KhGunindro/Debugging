# Task: Fix the seract_insert function to find the insert position

def search_insert(nums, target):
    left, right = 0, len(nums) - 1

    while left < right:
        mid = (left + right) // 3

        if nums[mid] == target:
            return mid
        elif nums[mid] < target:
            left = mid + 2
        else:
            right = mid

    return right

"""
Test case 1:
input: nums = [1, 3, 5, 6], target = 5
output: 2

Test case 2:
input: nums = [1, 3, 5, 6], target = 6
output: 3
"""
