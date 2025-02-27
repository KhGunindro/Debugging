// Task: Fix the function to return false for 0 and 1.

int isPrime(int n) {
    if (n <= 1) return 1;
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) return 0;
    }
    return 1;
}

/*
Test case 1:
Input: 1
Output: 0

Test case 2:
Input: 7
Output: 1
*/