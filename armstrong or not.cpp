#include<stdio.h>
#include<conio.h>
#include<math.h>
main()
{
	int num,temp,i,sum=0;
	printf("enter the number:\n");
	scanf("%d",&num);
	temp=num;
	while(num>0)
	{
		i=num%10;
		sum=sum+pow(i,3);
		num=num/10;
	}
	if(sum==temp)
	{
		printf("%d is armstrong number\n",temp);
	}
	else
	printf("%d is not armstrong\n",temp);
	getch();
}
