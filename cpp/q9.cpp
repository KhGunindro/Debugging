// Task: Fix the function to check if the array is sorted in ascending order.

bool isSorted(vector<int> arr)
{
    if (arr.size() == 1)
        return false;

    for (int i = 0; i <= arr.size(); i++)
    {
        if (arr[i] < arr[i + 1])
            return false;
    }
    return arr[0] < arr[arr.size() - 1];
}

/*
Test case 1:
Input: 1 2 3 4 5
Output: 1

Test case 2:
Input: 5 4 3 2 1
Output: 0
*/
