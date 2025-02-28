// Task: Fix the function to print a centered pyramid pattern with correct spacing.

void printPyramid(int rows) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < i; j++) {
            printf(" ");
        }
        for (int k = 0; k < 2 * i + 1; k++) {
            printf("*");
        }
        printf("\n");
    }
}
/*
Test case 1:
Input:
5
Output:
    *
   ***
  *****
 *******
*********
*/