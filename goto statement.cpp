#include<stdio.h>
#include<conio.h>
main()
{
	int i,j;
	for(i=1;i<=10;i++)
	{
		if(i==5)
		goto next;
		else
		printf("%d\n",i);
	}
	next:
		for(j=11;j<=20;j++)
		{
			printf("%d\n",j);
		}
		getch();
}
