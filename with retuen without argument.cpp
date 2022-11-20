#include<stdio.h>
#include<conio.h>
int add();
main()
{
	int s;
	s=add();
	printf("sum = %d",s);
	getch();
}
int add()
{
	int a,b,c;
	printf("enter the value of a and b:\n");
	scanf("%d%d",&a,&b);
	c=a+b;
	return(c);
}
