#include<stdio.h>
#include<conio.h>
int add(int,int);
main()
{
	int x,y,s;
	printf("enter the value of x and y:\n");
	scanf("%d%d",&x, &y);
	s=add(x,y);
	printf("sum = %d",s);
	getch();
}
int add(int a, int b)
{
	int c;
	c=a+b;
	return(c);
}
