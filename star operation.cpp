#include<stdio.h>
#include<conio.h>
main()
{
	int a,i,j,k;
	printf("enter the size\n");
	scanf("%d",&a);
    for(i=1;i<=a;i++)
    {
    for(j=a-i;j>=1;j--)
    {
    	printf(" ");
	}
	for(k=1;k<=(i*2)-1;k++)
	{
		printf("*");
	}
		printf("\n");
	}
	getch();
}
