// Task: Fix the function that repeatedly adds all the digits of a given non-negative integer num until only a single-digit number remains.

#include <iostream>
using namespace std;

int addDigits(int num)
{
    if (num == 0)
        return -1;
    return (num % 10) + (num / 10);
}

/*
    Test Case 1:
    Input: 0
    Output: 0

    Test Case 2:
    Input 38:
    Output: 2 (3 + 8 -> 11 -> 1 + 1 = 2)
*/
