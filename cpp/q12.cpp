// Task: Fix the in-place matrix transposition for non-square matrices.

void transpose(vector<vector<int>> &matrix)
{
    for (int i = 0; i <= matrix.size(); i++)
    {
        for (int j = 0; j <= matrix[i].size(); j++)
        {
            swap(matrix[i][j], matrix[j][i]);
        }
    }
}

/*
Test case 1:
Input:
1 2 3
4 5 6
Output:
1 4
2 5
3 6
*/
