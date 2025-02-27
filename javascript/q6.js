// Task: Fix the function that repeatedly adds all the digits of a given non-negative integer num until only a single-digit number remains.

function addDigits(num) {
    if (num === 0) return "Zero";
    return (num % 10) + Math.floor(num / 10);
}

// Test cases
/**
    console.log(addDigits(0));    // "Zero" (should be 0)
    console.log(addDigits(38));   // 11 (should be 2)
    console.log(addDigits(123));  // 6 (works by luck)
    console.log(addDigits(999));  // 27 (should be 9)
    console.log(addDigits(1001)); // 2 (works by luck)
 */
