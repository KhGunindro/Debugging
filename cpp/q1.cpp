// Task: Fix the function to correctly reverse the array in place.

using namespace std;
void reverseArray(vector<int>& arr) {
    for (int i = 0; i < arr.size(); i++) {
        swap(arr[i], arr[arr.size() - i - 1]);
    }
}

/*
Test case 1:
Input: 1 2 3 4 5
Output: 5 4 3 2 1

Test case 2:
Input: 1 2 3 4 5 6 7 8 9 10
Output: 10 9 8 7 6 5 4 3 2 1
*/