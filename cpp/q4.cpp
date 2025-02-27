// Task: Fix the function to remove all duplicates without skipping elements.

void removeDuplicates(vector<int>& arr) {
    for (int i = 0; i < arr.size(); i++) {
        for (int j = i + 1; j < arr.size(); j++) {
            if (arr[i] == arr[j]) {
                arr.erase(arr.begin() + j);
            }
        }
    }
}

/*
Test case 1:
Input: 1 2 3 4 5 2 3 4 5
Output: 1 2 3 4 5

Test case 2:
Input: 12 34 34 56 12
Output: 12 34 56
*/