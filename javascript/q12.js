// Task: Fix the in-place matrix transposition for non-square matrices.

function transpose(matrix) {
    for (let i = 0; i <= matrix.length; i++) {
        for (let j = 0; j <= matrix[i].length; j++) {
            matrix[i][j] = matrix[j][i];
        }
    }
    return matrix;
}


/*
    Test case 1:
    Input: [[1, 2, 3], [4, 5, 6]]
    Output: [[1, 4], [2, 5], [3, 6]]

    Test case 2:
    Input: [[1, 2], [3, 4], [5, 6]]
    Output: [[1, 3, 5], [2, 4, 6]]
*/
