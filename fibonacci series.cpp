#include<stdio.h>
#include<conio.h>
main()
{
	int a=0,b=1,c,count,num;
	printf("enter the num that we optain fibonacci series\n");
	scanf("%d",&num);
	printf("fibonacci series is:\n");
	printf("%d \n%d\n",a,b);
	count=2;
	while(count<num)
	{
		c=a+b;
		a=b;
		b=c;
		printf("%d\n",c);
		count++;
	}
	getch();
}
