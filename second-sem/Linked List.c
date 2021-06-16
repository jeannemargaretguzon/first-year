#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void main()
{
	struct TEMPLATE
	{
		char name[15];
		int age;
			struct TEMPLATE *nextnodeaddress;
	};

struct TEMPLATE *HEAD, *TAIL, *CURRENT;

HEAD = NULL;
TAIL = NULL;
CURRENT = NULL;

CURRENT = (struct TEMPLATE *) malloc(sizeof(struct TEMPLATE)); 
//assign memory for struc TEMPLATE
strcpy(CURRENT->name, "Loyda");
CURRENT->age = 24;
CURRENT->nextnodeaddress=NULL;

HEAD = CURRENT;
TAIL = CURRENT;

CURRENT = (struct TEMPLATE *) malloc(sizeof(struct TEMPLATE)); 
//assign memory for struc TEMPLATE
strcpy(CURRENT->name, "Mary");
CURRENT->age = 25;

CURRENT->nextnodeaddress = NULL;
HEAD->nextnodeaddress = CURRENT;
TAIL = CURRENT;

//DISPLAY THE LIST

CURRENT = HEAD;

printf("Displaying the List\n");

while (CURRENT != NULL)
{
	printf("\t%s\t%d years old", CURRENT->name, CURRENT->age);
	printf("\t%p\t%p years old", &CURRENT->name, &CURRENT->age);
	CURRENT = CURRENT ->nextnodeaddress;
	printf("\n");
}

CURRENT = HEAD;

printf("\n\nPress any key to continue..");
getch();
system("cls");

//SEARCH LIST
int result;
char search; 
int searcha;
	
	printf("Searching inside the list\n");
	
	printf("Enter the name to search:\t");
	scanf("%s", &search);
	printf("\nEnter the age to search:\t");
	scanf("%d", &searcha);

	CURRENT = HEAD;
	
	while(CURRENT != NULL){
		if (CURRENT->name == search || CURRENT->age == searcha){
			result =1;
			break;
		}
		else
			CURRENT = CURRENT->nextnodeaddress;	
	}
	
	if (result == 0){
		printf("\n\tPERSON DOES NOT EXIST");	
	}	
	else
		printf("\n\tPERSON IS ON THE LIST");
getch();

}
