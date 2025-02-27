// Task: Fix the function to check if a string is a palindrome.

int isPalindrome(char *s) {
    int left = 0, right = strlen(s) - 1;
    while (left < right) {
        if (s[left] != s[right]) return 0;
        left++; // BUG: Right not decremented
    }
    return 1;
}

/*
    Test case 1:
    Input: "racecar"
    Output: 1

    Test case 2:
    Input: "hello"
    Output: 0
*/