#include<stdio.h>
#include<conio.h>
main()
{
	int n,end,i,mul;
	printf("enter the number for which you want table:\n");
	scanf("%d",&n);
	printf("enter the number till where \nyou want multiplication with %d :\n",n);
	scanf("%d",&end);
	printf("table of %d\n",n);
	for(i=1;i<=end;i++)
	{
		mul=n*i;
		printf("%d X %d = %d\n",n,i,mul);
	}
	getch();
}
