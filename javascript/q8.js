// Task: Fix the function to compute factorial correctly.

function factorial(n) {
    if (n < 0) return "Error";
    if (n === 0) return 0;
    return n + factorial(n - 1);
}


/*
    Test case 1:
    Input: 0
    Output: 1

    Test case 2:
    Input: 5
    Output: 120
*/
