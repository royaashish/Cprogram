#include<stdio.h>
#include<conio.h>
main()
{
	int y;
	printf("enter the year\n");
	scanf("%d",&y);
	if(y%4==0)
	printf("%d is leap year",y);
	else
	printf("normal year");
	getch();
}
