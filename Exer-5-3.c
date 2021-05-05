#include<stdio.h>
#include<math.h>
#define p printf
#define s scanf

int main ()
{
	int N, X[20], Y[20], Z[20], sum;
	
	p ("Enter 20 integers: ");
	for (N=0; N<=19; N++){
		s("%d", &X[N]);
	}
	p ("Enter 20 integers: ");
	for (N=0; N<=19; N++){
		s("%d", &Y[N]);
	}
	p ("\nThe products of the elements in X and Y: ");
	for (N=0; N<=19; N++){
		Z[N] = X[N]*Y[N];
		p("%d"" ", Z[N]);
		sum+=Z[N];	
	}
	p("\n");
	p("Display the square roots of the sum in array Z: ");
	double result = sqrt(sum);
	p("%.2f", result);
	
	return 0;
}


























