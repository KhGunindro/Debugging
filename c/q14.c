// Fix the function to print a right inverted pyramid pattern with correct spacing.

void printInvertedPyramid(int rows) {
    for (int i = rows; i >= 1; i--) {
        for (int j = 0; j < rows - i; j++ {
            printf("  ");
        }
        for (int k = 0; k < i; k++) {
            printf("* ");
        }
        printf("\n");
    }
}

/*
Test case:
Input: 5
Output:
* * * * * 

  * * * * 

    * * * 

      * * 

        * 
*/