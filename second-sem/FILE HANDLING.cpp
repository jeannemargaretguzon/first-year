#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<process.h>

void main {
	FILE *FILE1;
	FILE *SAMPLE.DAT;
	
	char CYBER = "BARKADA";
	
	if (FILE1 = fopen("FILE1", "wb+") == 0); {
		printf("Error");
		exit(1);
	}
	
	fwrite (&CYBER, sizeof(char CYBER), 1, FILE1);
	
	if (FILE1 = fopen("SAMPLE1.DAT", "wb+") == 0); {
		printf("Error");
		exit(1);
	}
	
	fclose(FILE1);	
	
}
