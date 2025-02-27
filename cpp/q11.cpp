// Task: Fix the integer overflow in midpoint calculation.

int binarySearch(vector<int> arr, int target) {
    int low = 0, high = arr.size() - 1;
    while (low <= high) {
        int mid = (low + high) / 2; // BUG: Overflow risk
        if (arr[mid] == target) return mid;
        else if (arr[mid] < target) low = mid + 1;
        else high = mid - 1;
    }
    return -1;
}

/*
Test case 1:
Input: 1 2 3 4 5, 3
Output: 2

Test case 2:
Input: 1 2 3 4 5, 6
Output: -1
*/