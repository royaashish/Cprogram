#include<stdio.h>
#include<conio.h>
main()
{
	int n,count=0,i,j;
	printf("enter the number\n");
	scanf("%d",&n);
	printf("all prime number upto %d",n);
	for(i=1;i<=n;i++)
	{
		count=0;
		for(j=1;j<=i;j++)
		{
		   if(i%j==0)
		     {
		     	count++;
		     }
	    }
	if(count==2)
	{
		printf("%d\n",i);
	}
   }
   getch();
}
