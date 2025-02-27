// Task: Fix the function to print a centered pyramid pattern with correct spacing.

function printPyramid(rows) {
    for (let i = 0; i < rows; i++) {
        let line = "";
        for (let j = 0; j < i; j++) { 
            line += " ";
        }
        for (let k = 0; k < 2 * i + 1; k++) {
            line += "*";
        }
        console.log(line);
    }
}
/*
Test Cases:
printPyramid(5);
Expected Output:
    *
   ***
  *****
 *******
*********
*/