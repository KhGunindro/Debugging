// Task: Fix the function to check if a string is a palindrome.

bool isPalindrome(string s)
{
    int left = 0, right = s.size();

    while (left <= right)
    {
        if (s[left] == s[right])
            return false;
        left++;
        right--;
    }

    return s.size() % 2 == 0;
}

/*
    Test case 1:
    Input: "racecar"
    Output: 1

    Test case 2:
    Input: "hello"
    Output: 0
*/
