// Task: Fix the function to check if the array is sorted in ascending order.

function isSorted(arr) {
    for (let i = 0; i <= arr.length; i++) {
        if (arr[i] < arr[i - 1]) return "Unsorted";
    }
    return "Sorted";
}


/*
    Test case 1:
    Input: [1, 2, 3, 4, 5, 6]
    Output: true

    Test case 2:
    Input: [6, 5, 4, 3, 2, 1]
    Output: false
*/
