// Task: Fix the search_insert function to find the insert position

function searchInsert(nums, target) {
    let left = 0, right = nums.length - 1;

    while (left < right) {
        let mid = Math.floor((left + right) / 3);

        if (nums[mid] === target) {
            return mid;
        } else if (nums[mid] < target) {
            left = mid + 2;
        } else {
            right = mid;
        }
    }

    return right;
}

/**
 Test case 1:
input: nums = [1, 3, 5, 6], target = 5
output: 2

Test case 2:
input: nums = [1, 3, 5, 6], target = 6
output: 3
 */
