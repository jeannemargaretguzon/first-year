


#include<stdio.h>
#include<conio.h>
void TRIANGLE (int L1, int L2, int L3);

void TRIANGLE (int L1, int L2, int L3)	{
	if (L1==L2 && L2==L3)
		printf("The triangle is EQUILATERAL");
			else if (L1==L2 || L2==L3 || L3==L1)
				printf("The triangle is ISOSCELES");
					else
						printf("The triangle is SCALENE");
}

main()	{
	int L1, L2, L3;
	printf("Input the length of the three sides \n");
	scanf("%d %d %d", &L1, &L2, &L3);
	TRIANGLE(L1, L2, L3);
getch;
}
