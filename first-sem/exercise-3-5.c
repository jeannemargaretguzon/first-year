/* PROGRAMMING EXERCISE 3-5
Hypothetically speaking, on Mars a 100-pound person on Earth would weigh 38 pounds. 
On  Jupiter,  the  same person  weight  is  264  pounds.  
Write  a  program  that  will input the weight  of  a  person  in  pound  on Earth and displays the corresponding weight when the man is on Mars and on Jupiter. */

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int main()  {
    float earth_w = 0, mars_w = 0, jupiter_w = 0;

    printf("Enter the weight of the person on Earth (in pounds).\t");
    scanf("%f", &earth_w);
    
    mars_weight = (earth_weight / 9.81) * 3.711;
    jupiter_weight = (earth_weight / 9.81) * 24.79;

    system("cls");

    printf("Weight on Planets\n");
    printf("\tEarth weight:		%f pounds\n", earth_w);
    printf("\tMars weight:		%f pounds\n", mars_w);
    printf("\tJupiter weight:   	%f pounds\n", jupiter_w);
}
 
