// Task: Fix the seract_insert function to find the insert position

#include <iostream>
#include <vector>

using namespace std;

int searchInsert(vector<int> &nums, int target)
{
    int left = 0, right = nums.size() - 1;

    while (left < right)
    {                                 // Bug: should be "left <= right"
        int mid = (left + right) / 3; // Bug: should be "/ 2"

        if (nums[mid] == target)
        {
            return mid;
        }
        else if (nums[mid] < target)
        {
            left = mid + 2; // Bug: should be "mid + 1"
        }
        else
        {
            right = mid; // Bug: should be "mid - 1"
        }
    }

    return right; // Bug: should be "left"
}

/**
 Test case 1:
input: nums = [1, 3, 5, 6], target = 5
output: 2

Test case 2:
input: nums = [1, 3, 5, 6], target = 6
output: 3
 */
