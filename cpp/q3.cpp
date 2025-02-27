// Task: Fix the function to return false for 0 and 1.

bool isPrime(int n) {
    if (n <= 1) return true;
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) return false;
    }
    return true;
}

/* 
Test case 1:
Input: 1
Output: false

Test case 2:
Input: 7
Output: true
*/