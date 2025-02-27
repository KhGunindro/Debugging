# Task: Fix the in-place matrix transposition for non-square matrices.

def transpose(matrix):
    for i in range(len(matrix)):
        for j in range(len(matrix[i])):
            matrix[i][j], matrix[j][i] = matrix[j][i], matrix[i][j]
    return matrix

"""
Test case 1:
input: [[1, 2, 3], [4, 5, 6]]
output: [[1, 4], [2, 5], [3, 6]]

Test case 2:
input: [[1, 2], [3, 4], [5, 6]]
output: [[1, 3, 5], [2, 4, 6]]
"""