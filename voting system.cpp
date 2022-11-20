#include<stdio.h>
#include<conio.h>
void vote (int choice);
main()
{
	int n,stop;
	do{
	    printf("1)vote A\n2)vote B\n3)vote C\n");
	    scanf("%d",&n);
	    if(n>0&&n<=3)
	    {
	    	vote(n);
		}
		else
		{
			printf("enter valid input\n");
		}
	printf("enter 1 and any other number for continue else o for stop and find the result who won the vote\n");
	scanf("%d",&stop);
      }
      while(stop);
      vote(stop);
}
void vote(int choice)
{
	static int a,b,c;
	if(choice==1)
	{
		a++;
	}
	if(choice==2)
	{
		b++;
	}
	if(choice==3)
	{
		c++;
	}
	printf("votes for A=%d\n",a);
	printf("votes for B=%d\n",b);
	printf("votes for C=%d\n",c);
	if(choice==0)
	{
		if(a>b&&a>c)
		{
			printf("A won with votes");
		}
		if(b>a&&b>c)
		{
			printf("B won with votes");
		}
		if(c>b&&a<c)
		{
			printf("C won with votes");
		}
	}
}
