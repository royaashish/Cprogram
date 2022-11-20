#include<stdio.h>
#include<conio.h>
main()
{
	int size,i,flag=0,n;
	printf("enter the size of an array:\n");
	scanf("%d",&size);
	int arr[size];
	printf("enter element of array\n");
	for(i=0;i<size;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("enter the element that you want to search:\n");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		if(arr[i]==n)
		flag=1;
	}
	if(flag==1)
	{
		printf("search is successful\n");
		printf("%d is at %d position",n,i);
	}
	else
	{
		printf("element is not found in given array\n");
	}
	getch();
}
