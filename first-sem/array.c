/*Matrix Algebra operation is to determine the matrix which is the product of two other matrices.
ArrayA is a one dimensional array with the size of 3
A[3]						

ArrayB is a multidimensional array with 3 rows and 3 columns
B[3][3]

Array_C is a one dimensional array with size of 3 following the given formula: 
C[3]

C[0] = { (A[0] * B[0][0]) + (A[1] * B[0 ][1]) +  (A[2] * B[0][2]) }  
C[1] = { (A[0] * B[1][0]) + (A[1] * B[1 ][1]) +  (A[2] * B[1][2]) }
C[2] = { (A[0] * B[2][0]) + (A[1] * B[2 ][1]) +  (A[2] * B[2][2]) } 
 
Requirements:  Print all arrays.   
*/

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