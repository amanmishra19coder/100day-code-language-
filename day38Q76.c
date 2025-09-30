//Q76: Check if a matrix is symmetric.

/*
Sample Test Cases:
Input 1:
2 2
1 2
2 1
Output 1:
True

Input 2:
2 2
1 0
2 1
Output 2:
False

*/
#include <stdio.h>
#include <stdbool.h>
int main() 
{
    int rows, cols;
    printf("Enter the number of rows and columns : "); 
    scanf("%d %d", &rows, &cols);

    if (rows != cols) 
    {
        printf("False\n"); // A non-square matrix cannot be symmetric
        return 0;
    }

    int matrix[rows][cols];

    // Input matrix
    printf("Enter the elements of the array \n"); 
    for (int i = 0; i < rows; i++) 
    {
        for (int j = 0; j < cols; j++) 
        {
            scanf("%d", &matrix[i][j]);
        }
    }

    // Check for symmetry
    bool isSymmetric = true;
    for (int i = 0; i < rows; i++) 
    {
        for (int j = 0; j < cols; j++) 
        {
            if (matrix[i][j] != matrix[j][i]) 
            {
                isSymmetric = false;
                break;
            }
        }
        if (!isSymmetric) 
        {
            break;
        }
    }

    // Print result
    if (isSymmetric) 
    {
        printf("True\n");
    } 
    else 
    {
        printf("False\n");
    }

    return 0;
}