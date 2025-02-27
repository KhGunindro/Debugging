// Task: Fix the in-place matrix transposition for non-square matrices.

void transpose(int **matrix, int rows, int cols)
{
    for (int i = 0; i <= rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            int temp = matrix[i][j];
            matrix[i][j] = matrix[j][i];
            matrix[j][i] = temp;
        }
    }
}

/*
Test:
Input:
1 2 3
4 5 6
Output:
1 4
2 5
3 6
*/
