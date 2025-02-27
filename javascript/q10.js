// Task: Fix the function to check if a string is a palindrome.

function isPalindrome(s) {
    let left = 0, right = s.length - 1;
    while (left < right) {
        if (s[left] !== s[right]) return false;
        left++; // BUG: Missing right decrement
    }
    return true;
}

/*
    Test case 1:
    Input: "racecar"
    Output: true

    Test case 2:
    Input: "hello"
    Output: false
*/