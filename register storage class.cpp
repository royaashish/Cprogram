#include<stdio.h>
#include<conio.h>
main()
{
	register int i;
	int j;
	for(i=0;i<10;i++)
	{
		for(j=i;j<10;j++)
		{
		printf("%d",j);
        }
        printf("\n");
	}
getch();	
}
