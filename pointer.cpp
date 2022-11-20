#include<stdio.h>
#include<conio.h>
main()
{
	int a,*p;
	a=20;
	p=&a;
	printf("address of a = %u",p);
	printf("value of a = %d",*p);
	getch();
}
