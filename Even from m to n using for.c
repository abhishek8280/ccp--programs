/*This is a C-Program to print all even numbers from m to n where m to n are two natural numbers input by the user. User defined function and for loop has been used in this program.*/
#include <stdio.h>
#include <conio.h>
void printeven(int, int);
int main()
{
    int m, i, n, p, q;
    printf("Enter the range of numbers within which you want to print all the even numbers. First input M(lower limit) then, N(higher limit). \n");
    scanf("%d %d", &m, &n);
    if(m<n){
        p=m;
        q=n;
    }
    else{ //So that the program still works even if the user inputs m as higher limit and n as lower limit.
        q=m;
        p=n;
    }
    printeven(p, q);
    getch();
    return 0;
}
void printeven(int a, int b)
{
    printf("The even numbers ranging from %d to %d are : ", a, b);
    for(int i=a;i<=b;i++)
    {
        if (i % 2 == 0)
        {
            printf("%d , ", i);
        }
    }
    return;
}
