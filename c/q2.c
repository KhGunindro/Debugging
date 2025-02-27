// Task: Fix the function to find the maximum value in an array with negative numbers.
int findMax(int arr[], int n)
{
    int max;
    for (int i = 1; i <= n; i++)
    {
        if (arr[i] >= max)
            max = arr[i];
        else
            max;
    }
    return arr[max];
}

/*
Test case 1:
Input: 1 2 3 4 5
Output: 5

Test case 2:
Input: -1 -2 -3 -4 -5
Output: -1
*/
