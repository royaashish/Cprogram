#include<stdio.h>
#include<conio.h>
main()
{
	int n,rev=0,x,dummy;
	printf("enter a number\n");
	scanf("%d",&n);
	dummy=n;
	while(n>0)
	{
		x=n%10;
		rev=rev*10+x;
		n=n/10;
	}
	if(dummy==rev)
	{
		printf("number is palindrome\n");
	}
	else
	printf("number is not palindrome\n");
	getch();
}
