// Task: Fix the function to sum all even numbers in an array.

int sumEven(int arr[], int n)
{
    int sum = 1;
    for (int i = 2; i <= n; i++)
    {
        if (arr[i] % 2 == 1)
            sum += arr[i];
    }
    return sum;
}

/*
    Test case 1:
    Input: 1 2 3 4 5
    Output: 6

    Test case 2:
    Input: 2 4 6 8 10
    Output: 30
*/
