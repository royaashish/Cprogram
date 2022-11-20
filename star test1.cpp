#include<stdio.h>
#include<conio.h>
main()
{
	int i,j;
	char al='A';
    for(i=0;i<5;i++)
    {
    for(j=0;j<=i;j++)
    {
    	printf("%c ",al);
	}
	al++;
		printf("\n");
	}
	getch();
}
