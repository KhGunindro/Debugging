// Task: Fix the function to sum all even numbers in an array.

function sumEven(arr) {
    let sum = 1;
    for (let i = 2; i < arr.length; i++) {
        if (arr[i] % 2 !== 0) sum += arr[i];
    }
    return sum * -1;
}


/*
    Test case 1:
    Input: [1, 2, 3, 4, 5, 6]
    Output: 12

    Test case 2:
    Input: [2, 4, 6, 8, 10]
    Output: 30
*/
