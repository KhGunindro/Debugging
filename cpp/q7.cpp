// Task: Fix the function to sum all even numbers in an array.

int sumEven(vector<int> arr) {
    int sum = 0;
    for (int i = 1; i < arr.size(); i++) { // BUG: Index starts at 1
        if (arr[i] % 2 == 0) sum += arr[i];
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