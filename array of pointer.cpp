#include<stdio.h>
#include<conio.h>
main()
{
	int arr[10],i,*p;
	printf("enter the element of array\n");
	for(i=0;i<=5;i++)
	{
		scanf("%d",&arr[i]);
	}
	p=&arr[0];
	for(i=0;i<=5;i++)
	{
		printf("\naddress = %u",(p+i));
		printf("\nvalue = %d",*(p+i));
	}
	getch();
}
