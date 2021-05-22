#include<stdio.h>

int main(){
    int A[3];
    int B[3][3];
    int C[3]; 
    
    int i,j,c;
	
	printf("Enter array A: \n");
	for (i = 0; i <3; i++)	{ // getting array A
		scanf("%d", &A[i]);
	}
	
	printf("Enter array B: \n");
	for (i = 0; i <3; i++)	{ // getting array B
		for (j = 0; j < 3; j++)
			scanf("%d", &B[i][j]);
	}

	printf("Array A:");
	for (i = 0; i <3; i++)	{ // printing array A
		printf("%d \t", A[i]);
	}
	
	printf("\nArray B:");
	for (i = 0; i <3; i++)	{ // printing arrays B
		for (j = 0; j < 3; j++)
			printf("%d \t", B[i][j]);
	}
	
	printf("\nArray C:");
	for (c = 0, i = 0; c < 3 && i < 3; c++, i++)      { // getting array C 
		C[c] = (A[0] * B[i][0]) + (A[1] * B[i][1]) + (A[2] * B[i][2]);
		printf("%d \t", C[c]); // printing array C
	}
	

    return 0;
}
