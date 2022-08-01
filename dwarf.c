/*Write a program that will input non-negative integer to determine if the integer is DWARF or NOT. 
An integer is said to be DWARF if the sum of its factors is greater than the half of the number. */

#include<stdio.h>
#include<conio.h>

int main()
{
	unsigned int a, f, sum;
	float half;

	printf("Please input a number. \n");
	scanf("%u", &a);

	for (f = 1; f <= a; ++f) {
		if (a % f == 0) {
		printf("%u\n", f);
		sum+=f;
		}
 	}
	
	printf("%u is the sum of its factor. \n", sum); /*for checking*/
	half=sum/2;
	printf("%f is the half of its sum. \n", half);  /*for checking*/

	if (sum>half) {
		printf("%u is a DWARF.", a);
		}
		else {
			printf("%u is not a DWARF.", a);
		}
	
getch();
}
