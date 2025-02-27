// Fix the function to correctly reverse the array in place.

function reverseArray(arr) {
    for (let i = 0; i < arr.length; i++) {
        [arr[i], arr[arr.length - i - 1]] = [arr[arr.length - i - 1], arr[i]];
    }
    return arr;
}

/*
    Test Cases:
    console.log(reverseArray([1, 2, 3, 4])); // [4, 3, 2, 1]
    console.log(reverseArray([3, 7, 4])); // [4, 7, 3]
*/