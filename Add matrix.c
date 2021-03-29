/* This is a program to take user input of 2 matrices and then print the matrix which is sum of the two matrices. This has been done using 2-D arrays and user-defined functions. */
#include <stdio.h>
#include <conio.h>
void read_arr(int a[20][20], int row, int col)
{
    int i, j;
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            printf("Enter the element %d%d : ", i+1, j+1);
            scanf("%d", &a[i][j]);
        }
    }
}

void add_arr(int m1[20][20], int m2[20][20], int m3[20][20], int row, int col)
{
    int i, j;
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            m3[i][j] = (m1[i][j] + m2[i][j]);
        }
    }
}

void print_arr(int m[20][20], int row, int col)
{
    int i, j;
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            printf("%d \t", m[i][j]);
        }
        printf("\n");
    }
}
int main()
{
    int m1[20][20], m2[20][20], m3[20][20], row, col;
    printf("Enter number of rows :");
    scanf("%d", &row);
    printf("Enter number of colomns :");
    scanf("%d", &col);
    printf("\n Enter the first matrix \n");
    read_arr(m1, row, col);
    printf("Enter the second matrix \n");
    read_arr(m2, row, col);
    add_arr(m1, m2, m3, row, col);
    printf("The sum of the 2 matrices is :- \n");
    print_arr(m3, row, col);
    getch();
    return 0;
}
