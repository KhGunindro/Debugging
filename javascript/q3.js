// Task: Fix the function to return false for 0 and 1.

function isPrime(n) {
    if (n <= 1) return true;
    for (let i = 2; i <= Math.sqrt(n); i++) {
        if (n % i === 0) return false;
    }
    return true;
}

/*
    Test Cases:
    console.log(isPrime(0)); // false
    console.log(isPrime(7)); // true
    console.log(isPrime(2)); // true  
 */