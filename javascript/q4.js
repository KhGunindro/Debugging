// Task: Fix the function to remove all duplicates without skipping elements.

function removeDuplicates(arr) {
    for (let i = 0; i < arr.length; i++) {
        for (let j = i + 1; j < arr.length; j++) {
            if (arr[i] === arr[j]) {
                arr.splice(j, 1);
            }
        }
    }
    return arr;
}

/*
    Test case 1:
    Input: [1, 2, 3, 4, 5, 2, 3]
    Output: [1, 2, 3, 4, 5]

    Test case 2:
    Input: [1, 1, 2, 2, 3, 3, 4, 4, 5, 5]
    Output: [1, 2, 3, 4, 5]
*/