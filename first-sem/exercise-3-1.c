/* PROGRAMMING EXERCISE 3-1: 
The  volume  of  a  rectangular  box  is  given  by  the  formula, V=length  *  width  *  height.
Design a program that will calculate and display the volume of a box whose dimensions are specified by the user. */

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int main()    
{
    float rectangle_length, rectangle_width, rectangle_height, rectangle_volume;
    printf("Enter the dimensions of the rectangular box.\n");    
	
	printf("\tEnter the length:\t");
    scanf("%f", &rectangle_length);
    
	printf("\n\tEnter the height:\t");
    scanf("%f", &rectangle_height);
	
	printf("\n\tEnter the width:\t");
    scanf("%f", &rectangle_width);
    
    rectangle_volume = rectangle_width * rectangle_length * rectangle_height;    
    
    printf("\nCalculating the volume of a rectangular box......\n");
    printf("\nPress any key to continue......");
    getch();
	system("cls");
	
    printf("Length of the rectangle box: %.2f", rectangle_length);
    printf("\nWidth of the rectangle box: %.2f", rectangle_width);
    printf("\nHeight of the rectangle box: %.2f", rectangle_height);
    printf("\n\tVolume of the rectangle box: %.2f\n", rectangle_volume);
}
