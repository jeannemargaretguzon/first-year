#include<stdio.h>
#include<math.h>

int main ()
{
	int N, X[20], Y[20], Z[20], sum;
	
	printf("Enter 20 integers: ");
	for (N=0; N<=19; N++){
		scanf("%d", &X[N]);
	}
	printf("Enter 20 integers: ");
	for (N=0; N<=19; N++){
		scanf("%d", &Y[N]);
	}
	printf ("\nThe products of the elements in X and Y: ");
	for (N=0; N<=19; N++){
		Z[N] = X[N]*Y[N];
		printf("%d"" ", Z[N]);
		sum+=Z[N];	
	}
	printf("\n");
	printf("Display the square roots of the sum in array Z: ");
	double result = sqrt(sum);
	printf("%.2f", result);
	
	return 0;
}


























