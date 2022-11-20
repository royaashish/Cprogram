#include<stdio.h>
#include<conio.h>
void add(int , int);
main()
{
 int x,y;
 printf("enter the value of x and y\n");
 scanf("%d%d",&x,&y);
 add(x,y);
 getch();	
}
void add(int a, int b)
{
	int c;
	c=a+b;
	printf("sum = %d",c);
}
