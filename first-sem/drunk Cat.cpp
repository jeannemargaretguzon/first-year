/*JD Wine company wants to determine how long it will take a leaking barrel to fill a bucket underneath it. 
A bucket can holds 2,452  drops of wine. 
The barrel leaks at the rate of 162 drops of wine per hour. 
At the end of every 3rd hour, a cat  licks 28 drops of wine from the bucket. 
Write a program that will calculate and print how many hours will the bucket be filled and how many drops of wine the cat drunk.*/

#include<stdio.h>
#include<conio.h>

int main()
{
	int hour, drop, cat;
	
	for(drop = 0; drop != 2452;) {
		drop += 162; /*162 drops of wine per hour*/
		hour++;
			if (hour % 3 == 0)	{
				drop -= 28; /*28 drops of wine by cat*/
				cat = cat + 28;
				printf("The cat drunk %d drops of wine. \n", cat);
			}
	}
	
	printf("After %d hours, the bucket is now full. The cat drunk %d drops of wine.", hour,cat);
	
getch();
}
