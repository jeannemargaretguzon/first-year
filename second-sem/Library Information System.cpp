/*Library Information System
- title of the book
- author/s
- name of borrower
- number of days borrowed
- fine ( if any)

Conditions
- one borrower, one book policy
- maximum of 3 days borrowing
- fine of 5.00 per day in excess of 3 days borrowing
- compute for the fine to be paid by the student who borrowed the book beyond 3 days
- print members of library information system )*/

#include<stdio.h>
#include<conio.h>


main()	{
	struct libInfo {
		char title[50];
		char author[50];
		char borrower[50];
		int days;
		int fine;
	};
	
	struct libInfo form[10];
	
	int i = 0;
	char answer;
	char Y,y, N, n;
	
	printf("\t\t\tLibrary Information System.\n\t\tOne borrower, One book policy please");
	
	do {
	//getting library information
		printf("\nPlease enter the name of the borrower: ");
		gets(form[i].borrower);
		printf("\nPlease enter the title of the book borrowed: ");
		gets(form[i].title);
		printf("\nPlease enter the author/s of the books: ");
		gets(form[i].author);
		printf("\nPlease enter the number of days borrowed: ");
		scanf("%d", &form[i].days);
		if (form[i].days > 3)
			form[i].fine = (form[i].days - 3)*5;
			else				
					form[i].fine = 0.0;
	
	// printing all library information
		printf("\n\tName of Borrower: %s", form[i].borrower);
		printf("\n\tBorrowed Book: %s", form[i].title);
		printf("\n\tAuthor/s of the Book: %s", form[i].author);
		printf("\n\tNumber of days borrowed: %d", form[i].days);
		printf("\n\tFine for excess day/s: %d pesos", form[i].fine);
		
	//entering (another) input
		printf("\nWould you like to input another borrower? Y / N: ");
		scanf("%s%*c", &answer);
		
	}while((answer == 'y') || (answer == 'Y'));
}

