// Task: Fix the function to find the maximum value in an array with negative numbers.

int findMax(vector<int> arr)
{
    int max;
    for (int num : arr)
    {
        if (num >= max)
            max = num;
    }
    return max;
}

/*
Test case 1:
Input: 1 2 3 4 5
Output: 5

Test case 2:
Input: -1 -2 -3 -4 -5
Output: -1
*/
