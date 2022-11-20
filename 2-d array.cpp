#include<stdio.h>
#include<conio.h>
main()
{
	int m1[5][5],m2[5][5],i,j,a,b,c,d,sum;
	printf("enter the size of row and column of first matrix:\n");
	scanf("%d%d",&a,&b);
	printf("enter the elements of first matrix\n");
	for(i=0;i<a;i++)
	{
		for(j=0;j<b;j++)
		{
			scanf("%d",&m1[i][j]);
		}	
	}
    	printf("elements of first matrix\n");
	for(i=0;i<a;i++)
	{
		for(j=0;j<b;j++)
		{
			printf("%d\t",m1[i][j]);
		}
		printf("\n");	
	}
	printf("enter the size of row and column of second matrix:\n");
	scanf("%d%d",&c,&d);
	printf("enter the elements of second matrix\n");
	for(i=0;i<c;i++)
	{
		for(j=0;j<d;j++)
		{
			scanf("%d",&m1[i][j]);
		}	
	}
    	printf("elements of second matrix\n");
	for(i=0;i<c;i++)
	{
		for(j=0;j<d;j++)
		{
			printf("%d\t",m1[i][j]);
		}
		printf("\n");	
	}
	printf("sum of diagnols of seconf matrix\n");
	sum=0;
		for(c=0;c<=d;c++)
		{
			if(i=j)
			sum=sum+m2[i][i];
		}
	printf("%d \n",sum);
	getch();
}
