#include<stdio.h>
#include<conio.h>
main()
{
	int i,num=51,flag=1,guess,count=0;
	printf("guess the number:\n");
	scanf("%d",&guess);
	do
	{
		if(num==guess)
		{
			flag=0;
		}
		else if(guess<num)
		{
			flag=1;
			printf("your guess is lower than the number\n");
			count++;
		}
		else
		{
			flag=1;
			printf("your guess is grater than the number\n");
			count++;
		}
		if(flag==1)
		{
			printf("sorry please guess it again\n");
			scanf("%d",&guess);
		}
	}
	while(flag);
	printf("congrats! you guessed the number %d\n",num);
	printf("number of trails : %d \n",count);
	getch();
}
