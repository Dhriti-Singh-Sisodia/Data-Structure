/* TASK
1. Ask the dimensions of a matrix from the user
2. Insert the element in 2D array including zero
3. If sparsity greater then 60%
4. Create and print sparse matrix */

#include <stdio.h>
int main()
{
    int rows, cols, i, j, nonZeroCount = 0;
    printf("Enter number of rows: ");
    scanf("%d", &rows);
    printf("Enter number of columns: ");
    scanf("%d", &cols);

    int matrix[rows][cols];
    printf("Enter elements of the matrix:\n");
    for(i = 0; i < rows; i++)
    {
        for(j = 0; j < cols; j++)
        {
            scanf("%d", &matrix[i][j]);
            if(matrix[i][j] != 0)
            {
                nonZeroCount++;
            }
        }
    }

    float sparsity = (float)(rows * cols - nonZeroCount) / (rows * cols) * 100;
    printf("Sparsity: %f\n", sparsity);

    if(sparsity > 60)
    {
        printf("Sparse Matrix Representation:\n");
        printf("Row\tColumn\tValue\n");
        for(i = 0; i < rows; i++)
        {
            for(j = 0; j < cols; j++)
            {
                if(matrix[i][j] != 0)
                {
                    printf("%d\t%d\t%d\n", i, j, matrix[i][j]);
                }
            }
        }
    }
    else
    {
        printf("The matrix is not sparse.\n");
    }

    return 0;
}
