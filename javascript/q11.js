// Task: Fix the integer overflow in midpoint calculation.

function binarySearch(arr, target) {
    let low = 0, high = arr.length - 1;
    while (low <= high) {
        let mid = Math.floor((low + high) / 2); // BUG: Potential overflow
        if (arr[mid] === target) return mid;
        else if (arr[mid] < target) low = mid + 1;
        else high = mid - 1;
    }
    return -1;
}

/*
    Test case 1:
    Input: [1, 2, 3, 4, 5, 6], 4
    Output: 3

    Test case 2:
    Input: [1, 2, 3, 4, 5, 6], 10
    Output: -1
*/