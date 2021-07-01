/* PROGRAMMING EXERCISE 3-1: 
The  volume  of  a  rectangular  box  is  given  by  the  formula, V=length  *  width  *  height.
Design a program that will calculate and display the volume of a box whose dimensions are specified by the user. */

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int main()    
{
    float r_length, r_width, r_height, r_volume;
    printf("Enter the dimensions of the rectangular box.\n");    
	
	printf("\tEnter the length:\t");
    scanf("%f", &r_length);
    
	printf("\n\tEnter the height:\t");
    scanf("%f", &r_height);
	
	printf("\n\tEnter the width:\t");
    scanf("%f", &r_width);
    
    r_volume = r_width * r_length * r_height;    
    
    printf("\nCalculating the volume of a rectangular box......\n");
    printf("\nPress any key to continue......");
    getch();
	system("cls");
	
    printf("Length of the rectangle box: %.2f", r_length);
    printf("\nWidth of the rectangle box: %.2f", r_width);
    printf("\nHeight of the rectangle box: %.2f", r_height);
    printf("\n\tVolume of the rectangle box: %.2f\n", r_volume);
}
