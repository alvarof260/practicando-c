#include <stdio.h>
#include <math.h>
#define MAX 100
#define NUM 3

void fillMatrix(int matrix[][MAX], int n);
void printMatrix(int matrix[][MAX], int n);
void sumMatrix(int matrix_a[][MAX], int matrix_b[][MAX], int matrix_c[][MAX], int n);

int main()
{
    int matrix_a[NUM][NUM], matrix_b[NUM][NUM], matrix_c[NUM][NUM];
    printf("Fill the matrix:\n");
    fillMatrix(matrix_a, NUM);
    fillMatrix(matrix_b, NUM);
    printf("the matrix:\n");
    printMatrix(matrix_a, NUM);
    printMatrix(matrix_b, NUM);
    sumMatrix(matrix_a, matrix_b, matrix_c, NUM);
    printMatrix(matrix_c, NUM);
    return 0;
}

// no se puede hacer una matriz sin poner el tamaño si o si se debe poner la fila
void fillMatrix(int matrix[][MAX], int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }
}

void printMatrix(int matrix[][MAX], int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

void sumMatrix(int a[][MAX], int b[][MAX], int c[][MAX], int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            c[i][j] = a[i][j] + b[i][j];
        }
    }
}