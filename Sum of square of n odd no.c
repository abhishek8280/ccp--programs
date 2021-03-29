/*This is a C-Program to to calculate the sum of squares of first n odd numbers, where n has been input by the user. User defined function and for loop has been used in this program.*/
#include <stdio.h>
#include <conio.h>
#include <math.h>
void sumofsquares(int);
int main(){
    int n;
    printf("Enter the value of n, the number upto which you want the sum of squares of odd and even numbers to be printed \n");
    scanf("%d", &n);
    sumofsquares(n);
    getch();
    return 0;
}
void sumofsquares(int a){
float sum=0;
    for(int i=1;i<=a;i++){
        if(i%2 != 0) {
           printf("%d and %f \n", i,pow(i,2));
           sum=sum+pow(i,2);
        }
    }
    printf("The sum of the squares of all odd numbers till %d is = %f \n", a, sum);
    return;
}
