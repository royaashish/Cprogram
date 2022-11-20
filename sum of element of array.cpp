#include<stdio.h>
#include<conio.h>
main()
{
	int size,i,sum=0;
	printf("enter the size of an array:\n");
	scanf("%d",&size);
	int arr[size];
	printf("enter element of array\n");
	for(i=0;i<size;i++)
	{
		scanf("%d",&arr[i]);
		sum=sum+arr[i];
	}
	printf("sum of element of array = %d",sum);
	getch();
}
