#include<stdio.h>
#include<conio.h>
main()
{
	int m1[10][10],m2[10][10],mul[10][10]n,i,j,k,row,col,row2,col2;
	printf("enter the size of row and column of first matrix:\n");
	scanf("%d%d",&row,&col);
	printf("enter the size of row and column of second matrix:\n");
	scanf("%d%d",&row2,&col2);
	while(col!=row2)
	{
		printf("error column first matrix not equal to row of second matrix\n");
		printf("enter row and column of first matrix\n");
		scanf("%d%d",&row,&col);
		printf("enter the row and column of second matrix:\n");
	    scanf("%d%d",&row2,&col2);
    }
	printf("enter the elements of first matrix\n");
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			scanf("%d",&m1[i][j]);
		}	
	}
    	printf("elements of first matrix\n");
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			printf("%d\t",m1[i][j]);
		}
		printf("\n");	
	}
	printf("enter the elements of second matrix\n");
	for(i=0;i<row2;i++)
	{
		for(j=0;j<col2;j++)
		{
			scanf("%d",&m1[i][j]);
		}	
	}
    	printf("elements of second matrix\n");
	for(i=0;i<row2;i++)
	{
		for(j=0;j<col2;j++)
		{
			printf("%d\t",m1[i][j]);
		}
		printf("\n");	
	}
	for(i=0;i<row;i++)
	{
		for(j=0;j<col2;j++)
		{
			mul[i][j]=0;
		}
	}
	for(i=0;i<row;i++)
	{
		for(j=0;j<col2;j++)
		{
			for(k=0;k<row2;k++)
			{
				mul[i][j]+=m1[i][k]*m2[k][j];
	    	}
    	}
	}
	printf("multiplication of two matrix:\n");
	for(i=0;i<row;i++)
	{
		for(j=0;j<col2;j++)
		{
			printf("%d\t",mul[i][j]);
		}
		printf("\n");	
	}
	getch();
}
