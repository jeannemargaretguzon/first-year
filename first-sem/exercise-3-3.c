/*  PROGRAMMING EXERCISE 3-3
Consider three numbers a, b, and c. 
Write a program that will compute and display their sum, difference, product, quotients (a/ b/ c) andthe sum of their squares. */

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int main()    
{
    int a, b, c;
    int sum, difference; 
    float quotient;

	printf("Enter the value of a:\t");
    scanf("%d", &a);
    
	printf("Enter the value of b:\t");
    scanf("%d", &b);
	
	printf("Enter the value of c:\t");
    scanf("%d", &c);

    sum = a + b + c;
    difference = a - b - c;
    quotient = a/ b/ c;
    
    printf("\nCalculating the volume of a rectangular box......\n");
    printf("\nPress any key to continue......");
    getch();
	system("cls");
	
    printf("A: %d", a);
    printf("\nB: %d", b);
    printf("\nC: %d", c);
    printf("\n\tSum of A, B, C: %d\n", sum);
    printf("\n\tDifference of A, B, C: %d\n", difference);
    printf("\n\tQuotient of A, B, C: %.2f\n", quotient);
}
