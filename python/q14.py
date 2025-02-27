
# Fix the function to print a right inverted pyramid pattern with correct spacing.

def print_inverted_pyramid(rows):
    for i in range(rows, 0, -1):
        for j in range(rows - i):
            print("  ", end="")
        for k in range(i):
            print("* ", end="")
        print("\n")

"""
Test case:
Input: 5
Output:
* * * * * 

  * * * * 

    * * * 

      * * 

        * 
"""