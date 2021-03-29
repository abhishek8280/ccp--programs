/*This is a C-Program to let the user input elements of an integer array of a size of the user's choice. Then, this program interchanges the smallest and largest numbers within the array and display this new array with interchanged values. User-defined function has also been used in this program.*/
#include <stdio.h>
#include <conio.h>
void array(int);
void main()
{
	int p=0;
	int i;
	printf("Enter the size of the array. \n");
	scanf("%d", &p);
	array(p);
	getch();
}
void array(int n){
  int a[n];
  int max, min, maxpos, minpos, i, temp;
  printf("Enter the elements of the array :- \n");
	for (int i = 0; i < n; i++){
		scanf("%d", &a[i]);
	}
	max = a[0];
	min = a[0];
	maxpos = 0;
	minpos = 0;
	for(int i = 1; i < n; i++)
	{
		if (a[i] > max)
		{
			max = a[i];
			maxpos = i;
		}
		if (a[i] < min)
		{
			min = a[i];
			minpos = i;
		}
	}
	temp = a[maxpos];
	a[maxpos] = a[minpos];
	a[minpos] = temp;
	printf("After interchange [of the largest and smallest of numbers in the array], the array elements are: ");
	for (int i = 0; i < n; i++)
		printf("%d ", a[i]);
	return;
}
