//UNFINISHED 

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>


void header()   {
    printf("\t\tMASARAP-KUMAIN RESTAURTANT\n");
	printf("\t\t143 MABUSOG ST., LOVE CITY\n\n");
}

struct item     {
	char ItemCode[20];
	char ItemDesc[20];
	float Qty;
	float Price;
	float Amount;
}item[j];


main()          {
    int i, j, k, x;
    int answer, y, Y, N, n;
    float item_total;
    int customer_table, customer_type, customer_dining;

    while (j > 0)   {
		for (i = 0, j = 0; i <= j; i++) {
			j++;

            header();
            //Customer Info
            printf("\t\t\t\tOrder Form\n\n");
            printf("Table no.:\t");
	        scanf("%d", &customer_table);
	        while (customer_type >= 4)   {
		        printf("\nEnter Discount Type\t1-PWD\t2-SNR\t3-STD\t0-NONE):\t");
		        scanf("%d",&customer_type);
	        }
            while (customer_dining >= 3)    {
                printf("\n1 - Dine in or 2 - Take out?");
                scanf("%d", &customer_dining);
            }
            system("cls");

            //Dining Info
            while(answer = 'y' || answer = 'Y') {
                ++x;
                printf("Enter item code:\t");
                scanf("%d", &item[x].ItemCode);
                printf("Enter item name:\t");
                scanf("%s", &item[x].ItemDesc);
                printf("Enter item price:\t");
                scanf("%f", &item[x].Price);
                printf("Enter item quantity:\t");
                scanf("%d", &item[x].Qty);

                item_total [x] = (item[x].Price * item[x].Qty);
                printf("%f", item_total);
                total_amount += item total;   

                printf("Enter another item?");
                answer = getchar;
                system("cls");
            }
             
            printf("Enter amount received: P");
            while(item[x].Price < total_amount) {
                scanf("%f", &item[x].Price);
                if(item[x] < tbill)
			        printf("Insufficient Amount, Enter Another: P");
            }

            //Discount Type
            if (total_amount >= 200 && total_amount <= 1000)
				discount = total_amount * .02;
			    else if (total_amount >= 1001 && total_amount <= 2000)
				    discount = total_amount * .03;
			    else if (total_amount > 2000)
				    discount = total_amount * .04;
			if (customer_type == 1 || customer_type == 2 || customer_type == 3)
				gmd = total * .20;
			//compute net bill
			td = gmd + sd;
			net = total - td;
            



            
}
