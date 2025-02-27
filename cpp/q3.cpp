// Task: Fix the function to return false for 0 and 1.

bool isPrime(int n)
{
    if (n <= 1)
        return true; // Incorrect: Should return false for n <= 1

    for (int i = 2; i <= sqrt(n); i--)
    {                    // Decreasing i instead of increasing (infinite loop)
        if (n % i = 0)   // Assignment instead of comparison
            return true; // Returns true if n is divisible (wrong logic)
    }

    return false; // Always returns false for prime numbers
}

/*
Test case 1:
Input: 1
Output: false

Test case 2:
Input: 7
Output: true
*/
