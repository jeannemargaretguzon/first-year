/*  PROGRAMMING EXERCISE 3-4
A  supermarket  sells  bags  of  mixed  candies.  
Four types of candies are offered. Candy a costs Php. 35.00/kg; Candy B cost Php. 45.00/ kg; candy C cost Php. 56.00/kg and Candy D  cost  Php.  57.50 kg. 
Write a program that will calculate and print the amount of bag of candies in terms of the weight of each type of candy as provided by the program user. */

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int main()    {
    int a;  //switch-case
    float price, total_price;
    int weight;

    printf("What type of candy you want to buy?");
    printf("\n1. Candy A\tPHP 35.00 per kilogram");
    printf("\n2. Candy B\tPHP 45.00 per kilogram");
    printf("\n3. Candy C\tPHP 56.00 per kilogram");
    printf("\n4. Candy D\tPHP 57.50 per kilogram\t");
    scanf("%d", &a);
    printf("\nHow many kilograms do you want to buy?\t");
    scanf("%d", &weight);
    switch (a)  {
    case 1:
        total_price = (weight * 35);
        printf("Total amount: %.2f", total_price);
        break;
    case 2:
        total_price = (weight * 45);
        printf("Total amount: PHP %.2f", total_price);
        break;
    case 3:
        total_price = (weight * 56);
        printf("Total amount: PHP %.2f", total_price);
        break;
    case 4:
        total_price = (weight * 57);
        printf("Total amount: PHP %.2f", total_price);
        break;
    default:
        break;
    }
}