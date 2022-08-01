/*  PROGRAMMING EXERCISE 3-2:
Prepare  a  program  that  converts  hours  to minutes  only.  
A  typical  conversion  should write the message: 3 hours is equal to 180 minutes */

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int main()    
{
    int hour, minute;
 
	printf("Enter the hours:\t");
    scanf("%d", &hour);
    
    minute = hour * 60;     
    
    printf("\nCalculating the hours to minutes......\n");
	
    printf("\t%d hours is equal to %d minutes\n", hour, minute);
}
