/*  Computer Equipment Inventory
- item number
- item description
- unit price
- available quantity

Conditions:
- assign 100 pieces as initial value per item
- ask the user how many items he / she wants to borrow
- allow the user to borrow such item if the number of quantity he / she wants
to borrow is enough against available quantity 
then print the following information : item number, item description, new available quantity
- If the quantity he / she want to borrow is more than the available quantity
print the message �Quantity Not Enough�. ) */

#include<stdio.h>
#include<conio.h>

main()	{
	struct EquipInv {
		int number;
		char description[10];
		float price;
		int quantity;
	};
	
	struct EquipInv buy[5] = {
	{0, "Keyboard", 1843, 100}, 
	{1, "USB", 599.0, 100}, 
	{2, "Harddrive", 3456.0, 100},
	{3, "Mouse", 750.0, 100}, 
	{4, "Stylus", 2569.0, 100}
	};
	
	int i = 0, j = 0;
	int product = 0;
	float total;
	char answer, Y, y, N, n;
	
	printf("\t\t\tComputer Equipment Inventory");
	
	//printing the whole equipment inventory list
	for (j = 0; j < 5; j++){
		printf("\nItem Number %d:\t%s", buy[j].number, buy[j].description);
		printf("\nItem Retail Price:\t%.2f", buy[j].price);
		printf("\nItem Quantity left:\t%d\n", buy[j].quantity);	
	}
	
	do							{
		//Asking the user how many item she/he wants to buy
	printf("\nEnter the item number would you like to buy?\t");
	scanf("%d", &i);
	printf("\nHow many would you like to buy?\t");
	scanf("%d", &product);
	if (product <= buy[i].quantity)	{
		buy[i].quantity = buy[i].quantity - product;		//initial quantity - quantity bought

		//printing item number, item description, new available quantity

		printf("Item Number:\t%d\n", buy[i].number);
		printf("Item Description:\t%s\n", buy[i].description);
		printf("Item Retail Price:\t%.2f\n", buy[i].price);
		printf("Item Quantity left:\t%d\n", buy[i].quantity);	
	}	
		else {
			printf("Quantity Not Enough");					//quantity bought is more than initial quantity
	}	
	
	total += buy[i].price * product; 						//total price
	
		//entering (another) input
	printf("\nWould you like to input another purchase? Y / N: ");
	scanf("%s%*c", &answer);
		
	}while((answer == 'y') || (answer == 'Y'));

	printf("\tTotal price:\t%.2f\n", total);
}


