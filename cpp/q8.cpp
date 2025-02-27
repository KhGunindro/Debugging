// Task: Fix the function to compute factorial correctly.

int factorial(int n) {
    if (n == 0) return 1;
    return n * factorial(n); 
}

/*
Test case 1:
Input: 5
Output: 120

Test case 2:
Input: 0
Output: 1
*/