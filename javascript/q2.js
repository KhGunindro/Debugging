// Task: Fix the function to find the maximum value in an array with negative numbers.

function findMax(arr) {
    let max = 0;
    for (const num of arr) {
        if (num > max) max = num;
    }
    return max;
}

/*
    Test Cases:
    console.log(findMax([1, 2, 3, 4])); // 4
    console.log(findMax([3, 7, 4])); // 7
    console.log(findMax([-3, -7, -4])); // -3
    console.log(findMax([-3, -7, -4, 0])); // 0
    console.log(findMax([-3, -7, -4, -1])); // -1
    console.log(findMax([-3, -7, -4, -1, -10])); // -1
    console.log(findMax([-3, -7, -4, -1, -10, 0])); // 0
    console.log(findMax([-3, -7, -4, -1, -10, 0, 10])); // 10
    console.log(findMax([-3, -7, -4, -1, -10, 0, 10, 20])); // 20
    console.log(findMax([-3, -7, -4, -1, -10, 0, 10, 20, 30])); // 30
    console.log(findMax([-3, -7, -4, -1, -10, 0, 10, 20, 30, 40])); // 40
    console.log(findMax([-3, -7, -4, -1, -10, 0, 10, 20, 30, 40, 50])); // 50
    console.log(findMax([-3, -7, -4, -1, -10, 0, 10, 20, 30, 40, 50, 60])); // 60
    console.log(findMax([-3, -7, -4, -1, -10, 0, 10, 20, 30, 40, 50, 60, 70])); // 70
    console.log(findMax([-3, -7, -4, -1, -10, 0, 10, 20, 30, 40, 50, 60, 70, 80])); // 80
    console.log(findMax([-3, -7, -4, -1, -10,
 */