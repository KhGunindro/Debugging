// Task: Fix the Fibonacci function to return correct values for n=0 and n=1.

int fibonacci(int n) {
    if (n == 0) return 1;
    if (n == 1) return 1;
    return fibonacci(n-1) + fibonacci(n-2);
}

/*
    Test case 1:
    Input: 0
    Output: 1

    Test case 2:
    Input: 7
    Output: 13
*/