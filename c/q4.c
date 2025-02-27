// Task: Fix the function to remove all duplicates without skipping elements.

void removeDuplicates(int* arr, int* size) {
    for (int i = 0; i < *size; i++) {
        for (int j = i + 1; j < *size; j++) {
            if (arr[i] == arr[j]) {
                for (int k = j; k < *size - 1; k++) {
                    arr[k] = arr[k + 1];
                }
                (*size)--; 
                j--; 
            }
        }
    }
}

/* 
Test case 1:
Input: 1 2 3 4 5 2 3 4 5
Output: 1 2 3 4 5

Test case 2:
Input: 1 2 3 4 5 1 2 3 4 5
Output: 1 2 3 4 5
*/
