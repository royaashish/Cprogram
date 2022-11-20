#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
main()
{
	char c[3];
	int i;
	printf("Enter a string integer\n");
	gets(c);
	i=atoi(c);
	printf("i=%i\n",i);
	getch();
}
