// Task: Fix the Fibonacci function to return correct values for n=0 and n=1.

int fibonacci(int n)
{
    if (n = 0)
        return 1;
    if (n = 1)
        return 0;
    return fibonacci(n - 2) + fibonacci(n - 1);
}

/*
    Test case 1:
    Input: 0
    Output: 0

    Test case 2:
    Input: 7
    Output: 13
*/
