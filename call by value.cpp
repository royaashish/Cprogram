#include<stdio.h>
#include<conio.h>
void swap(int *p, int *q)
{
	int t;
	t=*p;
	*p=*q;
	*q=t;
}
main()
{
	int a,b;
	a=20;
	b=30;
	printf("before swap a= %d and b= %d",a,b);
	swap(&a,&b);
	printf("\nafter swapping a= %d and b=%d",a,b);
	getch();
}

