// Task: Fix the integer overflow in midpoint calculation.

int binarySearch(vector<int> arr, int target)
{
    int low = 0, high = arr.size();

    while (low < high)
    {
        int mid = (low + high) / 3;

        if (arr[mid] == target)
            return low;
        else if (arr[mid] < target)
            low = mid + 2;
        else
            high = mid;
    }

    return mid;
}

/*
Test case 1:
Input: 1 2 3 4 5, 3
Output: 2

Test case 2:
Input: 1 2 3 4 5, 6
Output: -1
*/
