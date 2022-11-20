#include<stdio.h>
#include<conio.h>
main()
{
	int i,choice;
	float cash=0;
	char c;
	do
	{
	printf("Enter\n1 - Withdraw\n2 - Deposite\n3 - Check-balance\n");
	scanf("%d",&choice);
	switch(choice)
	    {
		case 1:
		  	{
		 	 int withdraw;
			  printf("enter the amount to withdraw\n");
			  scanf("%d",&withdraw);
			  if(withdraw%100==0)
			  {
			  	if(cash>=withdraw)
			  	{
			  		cash=cash-withdraw;
			  		printf("Amount after withdrawl of cash is %f\n",cash);
			    }
			    else
			    {
			    	printf("you don't have enough balance to withdraw.Please deposite amount\n");
				}
			  }	
			  else
			  {
			  	printf("Enter withdrawl amount in 100's\n");
			  }
			  break;
			}
		case 2:
		{
		 int deposit;
		 printf("Enter the amount to deposit\n");
		 scanf("%d",&deposit);
		 if(deposit%100==0)
		 {	
		 cash=cash+deposit;
		 printf("Balance after deposit amount is %f\n",cash);
	     }
	     else
	     {
	     	printf("Please Enter amount in 100's\n");
		 }
		 break;
		}
	case 3:
	    {
	    	printf("Balance in the Account is %.2f\n",cash);
	    	break;
		}		
		default:
			{
			printf("enter valid choice\n");
			break;
		    }
		}
	printf("To continue press 'Y' else any letter\n");
	fflush(stdin);
	scanf("%c",&c);	
	}
	while(c=='y' || c=='Y');
	printf("Thanks for using our ATM\n");
	getch();
}
