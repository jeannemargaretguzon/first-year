/* 
    Submitted by:
    BSIT 2-5
    Guzon, Jeanne Margaret L. 
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* Write a program that will initally create an UNSORTED list containing the following and then run the program:
    Mitch
	Diane
	Jack
	Robbie
	Katherine 
*/

struct node {
	char name[10];
		struct node *next;
};

void display_list(struct node *HEAD){
	struct node *CURRENT;
	
	printf("Displaying the List\n");

    CURRENT = HEAD;
    
    do {
	    printf("\t%s\t%p", CURRENT->name, &CURRENT->name);
	    CURRENT = CURRENT->next;
	    printf("\n");
    } while (CURRENT != NULL);
}
	
int main(){
	int i;
	char names[6][10] = {"Mitch", "Diane", "Jack", "Robbie", "Katherine"};
    struct node *HEAD, *SECOND, *THIRD, *FOURTH, *FIFTH; 
    struct node *prev_node, *new_node;
    
    HEAD = NULL;
    HEAD = (struct node*) malloc(sizeof(struct node)); 
	strcpy(HEAD->name, "Mitch");                              // assign value to the head
	HEAD->next = NULL;
	prev_node = HEAD;
	
    new_node = (struct node*) malloc(sizeof(struct node)); 
	strcpy(new_node->name, "Diane");                            // assign value to the head
	new_node->next = NULL; 
	prev_node->next = new_node;
	prev_node = new_node;
	
	new_node = (struct node*) malloc(sizeof(struct node)); 
	strcpy(new_node->name, "Jack");                            // assign value to the head
	new_node->next = NULL; 
	prev_node->next = new_node;                                   
	prev_node = new_node;
	
	new_node = (struct node*) malloc(sizeof(struct node)); 
	strcpy(new_node->name, "Robbie");                            // assign value to the head
	new_node->next = NULL; 
	prev_node->next = new_node;                                   
	prev_node = new_node;
	
	new_node = (struct node*) malloc(sizeof(struct node)); 
	strcpy(new_node->name, "Katherine");                            // assign value to the head
	new_node->next = NULL; 
	prev_node->next = new_node;                                   
	prev_node = new_node;
	
	display_list(HEAD);
}


