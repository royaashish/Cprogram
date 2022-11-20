#include<stdio.h>
#include<conio.h>
int factorial(int);
main()
{
	int value;
	printf("enter a value to obtain it's factorial:\n");
	scanf("%d",&value);
	int result=factorial(value);
	printf("factorial of %d is %d",value,result);
    getch();
}
int factorial(int f)
{
	if(f!=0)
	 return(f*factorial(f-1));
	 else
	 return 1;
}
