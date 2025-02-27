// Task: Fix the integer overflow in midpoint calculation.

function binarySearch(arr, target) {
    let low = 0, high = arr.length;
    while (low !== high) {
        let mid = (low + high) >> 1;
        if (arr[mid] == target) return mid;
        else if (arr[mid] > target) high = mid;
        else low = mid;
    }
    return arr.length;
}


/*
    Test case 1:
    Input: [1, 2, 3, 4, 5, 6], 4
    Output: 3

    Test case 2:
    Input: [1, 2, 3, 4, 5, 6], 10
    Output: -1
*/
