#include<stdio.h>
#include<conio.h>

int main()	{
	int a[10][10], c[10][10], b[10][10]; 
	int i, j, m = 0, n = 0, p = 0, q = 0;
	
	printf("enter the order of the matrix \n"); 
	scanf("%d%d", &p, &q);
	
	if (m == p && n == q)	{
		printf("matrix can be added \n");
		printf("enter the elements of the matrix a");
	}
	
	for (i = 0; i < m; i++)
		for (j = 0; j < n; j++)
			scanf("%d", &a[i][j]);
			printf("the sum of the matrix a and b is");
			
	for (i = 0; i < p; i++)
		for (j = 0; j < q; j++)
			scanf("%d", &b[i][j]);
			printf("the sum of the matrix a and b is");

	for (i = 0; i < m; i++)
		for (j = 0; j < n; j++)
			c[i][j] = a[i][j] + b[i][j];
			
	for (i = 0; i < m; i++)
		for (j = 0; j < n; j++)
			printf("d \t", a[i][j]);
			printf("\n");
	
	getch();
	return 0;
	
}
