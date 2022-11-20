#include<stdio.h>
#include<conio.h>
void add();
main()
{
	add();
	getch();
}
void add()
{
	int a,b,c;
	printf("enter the value of a and b:\n");
	scanf("%d%d",&a,&b);
	c=a+b;
	printf("sum = %d",c);
}
