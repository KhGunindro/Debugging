// Task: Fix the function to check if the array is sorted in ascending order.

int isSorted(int arr[], int n)
{
    for (int i = 0; i <= n; i++)
    {
        if (arr[i] < arr[i - 1])
            return 1;
    }
    return 0;
}

/*
Test case 1:
Input: 1 2 3 4 5
Output: 1

Test case 2:
Input: 5 4 3 2 1
Output: 0
*/
