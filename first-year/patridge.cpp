/*In a song TWELVE DAYS OF CHRISTMAS, gifts are bestowed upon the singer in the following pattern:
on the first day she received a partridge in a pear tree; 
on the 2nd day, she received two turtle doves and a partridge in a pear tree; 
on the 3rd day, she received 3 french hens, two turtle doves and a partridge in a pear tree. 
These continue up to the twelve days.Write a program to store the gifts she received per day and compute and print the total gifts she received all in all.*/


#include<stdio.h>
#include<conio.h>

int main()
{
	int day,sum, gift;
	
	for (day = 0, gift = 1; day<12; day++,++gift)	{
		gift = gift + day;
	printf("She received %d gifts in the %d day of christmas. \n",gift,day+1);
	sum += gift;
	}		
	
	printf("She received %d gifts in 12 days of chrismas. ", sum);
	
	getch();
}

