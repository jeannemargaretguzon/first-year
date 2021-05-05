#include<stdio.h>
#include<conio.h>

void kar1(char *c, char b, char *a)		{
	*a = 'c'; b = 'a'; *c = 'b';
	printf("new kar %c %c %c\n", *a, b, *c);
	}
	
void kar2(char *b, char *a, char *c)	{
	*a = 'b'; *b='c'; *c ='a';
	printf("new kar %c %c %c\n", *a, *b, *c);
	} 
	
main()	{
	char a = 'a', b = 'b', c = 'c';
	printf("initial kar %c %c %c\n", a, b, c);
	kar1(&a,b,&c);
	printf("initial kar %c %c %c\n", a, b, c);
	kar2(&a,&b,&c);
	printf("initial kar %c %c %c\n", a, b, c);
	kar1(&c,b,&a);
	printf("initial kar %c %c %c\n", a, b, c);
	kar2(&c,&a,&b);
	printf("initial kar %c %c %c\n", a, b, c);
	getch();
	
return 0;
}
