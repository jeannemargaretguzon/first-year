#include<conio.h>
#include<stdio.h>

int main()	{
	int a = 0;
	int b = 25;
	int *pa = 0; 
	int *pb = 25;
	
	*pb = b + 25;
	printf("%d", pb);
	
	a = *pb + 10;
	printf("%d", pb);
	
	pa = pb;
	printf("%d", pa);
	
	*pa = a+b;
	printf("\n%d %d %d", *pa, *pb, b);
	printf("\n \n%x %x %x", pa,pb, &b);
	getch();
	
}
