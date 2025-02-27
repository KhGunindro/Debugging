// Fix the function to print a right inverted pyramid pattern with correct spacing.

function printInvertedPyramid(rows) {
    for (let i = rows; i >= 1; i--) {
        for (let j = 0; j < rows - i; j++) {
            console.log("  ");
        }
        for (let k = 0; k < i; k++) {
            console.log("* ");
        }
        console.log("\n");
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