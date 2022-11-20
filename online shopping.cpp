#include<stdio.h>
#include<conio.h>
#include<string.h>
main()
{
static int totalcost;
int i,j,choice,c=1,a[9],cost[9];
for(i=0;i<9;i++)
a[i]=0;
char str[100];
char items[9][100]={ "Sandisk 16 GB",
"Logitech mouse",
"Pendriven 16 GB",
"Adidas",
"Nike",
"Leecooper",
"Mi note 3",
"Nokia 3",
"samsung"
};
printf("enter your name:\n");
gets(str);
printf("Hello %s, Welcome to our online shopping.\n",str);
do{
	if(c==1)
	{
		printf("Enter\n1 - Computer accessories\n2 - shoes\n3 - mobiles \nAny other number to exit\n");
		scanf("%d",&choice);
	switch(choice)
	{
		case 1:
			{
				int accessorieschoice;
				printf("enter\n1 - Sandisk 16 GB - Rs.355\n2 - Logitech mouse - Rs.500\n3 - Pendrive 16 GB - Rs.550\nAny other number to exit\n");
			    scanf("%d",&accessorieschoice);
			    cost[0]=355;
			    cost[1]=500;
			    cost[2]=550;
			    switch(accessorieschoice)
			    {
			    	case 1:
			    		{
			    			int num;
			    			printf("your choice Sendisk 16 GB with Rs.355.Are you sure to buy.If 'yes' enter 1 else any number\n");
			    			scanf("%d",&num);
			    			if(num==1)
			    			{
			    				a[0]++;
			    				totalcost=totalcost+355;
							}
		                    printf("your cost is in cart is %d\n",totalcost);
		                    break;
						}
					case 2:
						{
						    int num;
			    			printf("your choice Logitech with Rs.500.Are you sure to buy.If 'yes' enter 1 else any number\n");
			    			scanf("%d",&num);
			    			if(num==1)
			    			{
			    				a[1]++;
			    				totalcost=totalcost+500;
							}
		                    printf("your cost is in cart is %d\n",totalcost);
		                    break;	
						}
					case 3:
						{
							int num;
			    			printf("your choice pendrive 16 GB with Rs.550. Are you sure to buy.If 'yes' enter 1 else any number\n");
			    			scanf("%d",&num);
			    			if(num==1)
			    			{
			    				a[2]++;
			    				totalcost=totalcost+550;
							}
		                    printf("your cost is in cart is %d\n",totalcost);
		                    break;
						}
					default:
						{
						    printf("exit from computer accessories\n");
							break;	
				        }
				    }
					break;
	}
	    case 2:
	    	{
	    		int shoeschoice;
				printf("enter\n1 - Adidas - Rs.3550\n2 - Nike - Rs.5000\n3 - Leecooper - Rs.2800\nAny other number to exit\n");
			    scanf("%d",&shoeschoice);
			    cost[3]=3550;
			    cost[4]=5000;
			    cost[5]=2800;
			    switch(shoeschoice)
			    {
			    	case 1:
			    		{
			    			int num;
			    			printf("your choice Adidas with Rs.3550.Are you sure to buy.If 'yes' enter 1 else any number\n");
			    			scanf("%d",&num);
			    			if(num==1)
			    			{
			    				a[3]++;
			    				totalcost=totalcost+3550;
							}
		                    printf("your cost is in cart is %d\n",totalcost);
		                    break;
						}
					case 2:
						{
						    int num;
			    			printf("your choice Nike with Rs.5000.Are you sure to buy.If 'yes' enter 1 else any number\n");
			    			scanf("%d",&num);
			    			if(num==1)
			    			{
			    				a[4]++;
			    				totalcost=totalcost+5000;
							}
		                    printf("your cost is in cart is %d\n",totalcost);
		                    break;	
						}
					case 3:
						{
							int num;
			    			printf("your choice leecooper with Rs.2800. Are you sure to buy.If 'yes' enter 1 else any number\n");
			    			scanf("%d",&num);
			    			if(num==1)
			    			{
			    				a[5]++;
			    				totalcost=totalcost+2800;
							}
		                    printf("your cost is in cart is %d\n",totalcost);
		                    break;
						}
					default:
						{
						    printf("exit from shoes catagories\n");
							break;	  
			         	}
			        }
			break;
			}
		case 3:
		    {
		    	int mobilechoice;
				printf("enter\n1 - mi note 3 - Rs.11000\n2 - Nokia 3 - Rs.9866\n3 - Samsung - Rs.12800\nAny other number to exit\n");
			    scanf("%d",&mobilechoice);
			    cost[6]=3550;
			    cost[7]=5000;
			    cost[8]=2800;
			    switch(mobilechoice)
			    {
			    	case 1:
			    		{
			    			int num;
			    			printf("you choose to buy mi note 3 for Rs.11000.Are you sure to buy.If 'yes' enter 1 else any number\n");
			    			scanf("%d",&num);
			    			if(num==1)
			    			{
			    				a[6]++;
			    				totalcost=totalcost+11000;
							}
		                    printf("your cost is in cart is %d\n",totalcost);
		                    break;
						}
					case 2:
						{
						    int num;
			    			printf("you choose to buy Noika 3 for Rs.9866.Are you sure to buy.If 'yes' enter 1 else any number\n");
			    			scanf("%d",&num);
			    			if(num==1)
			    			{
			    				a[7]++;
			    				totalcost=totalcost+9866;
							}
		                    printf("your cost is in cart is %d\n",totalcost);
		                    break;	
						}
					case 3:
						{
							int num;
			    			printf("you choose samsung for Rs.12800. Are you sure to buy.If 'yes' enter 1 else any number\n");
			    			scanf("%d",&num);
			    			if(num==1)
			    			{
			    				a[8]++;
			    				totalcost=totalcost+12800;
							}
		                    printf("your cost is in cart is %d\n",totalcost);
		                    break;
						}
					default:
						{
						    printf("exit from mobile catagories\n");
							break;	  
			         	}
			        }
			break;
			}	
			default:
				{
					printf("Enter valid categories choice\n");
					break;
				}
	}
	printf("%s's cart\n",str);
	printf("Id\titem\t\t\tQuantity\t\t\tCost\n");
	for(i=0;i<9;i++)
	{
		if(a[i]!=0)
		{
			printf("%d\t%s\t\t\t%d\t\t\t%d\n",i,items[i],a[i],(cost[i]*a[i]));
		}
	}
	printf("Total cost \t\t\t\t\t%d\n",totalcost);
	printf("If you want to buy anything more enter\n1 to add Item\n2 to delete Item \nany other number to exit\n");
    scanf("%d",&c);
}
if(c==2)
{
	int id;
	printf("Enter id to delete item\n");
	scanf("%d",&id);
	if(id<9&&id>=0)
	{
		totalcost=totalcost-(cost[id]*a[id]);
		a[id]=0;
	}
	else 
	{
		printf("Enter valid id\n");
	}
	printf("Revised Items\n");
	printf("Id\tItem\t\t\tQuantity\t\tCost\n");
	for(i=0;i<9;i++)
	{
		if(a[i]!=0)
		{
			printf("%d\t%s\t\t%d\t\t%d\n",i,items[i],a[i],(cost[i]*a[i]));
		}
	}
	printf("total cost\t\t\t\t\t%d\n",totalcost);
	printf("If you want to buy anything more enter\n1 to add Item\n2 to delete Item \nany other number to exit\n");
    scanf("%d",&c);
}
}
while(c==1 || c==2);
printf("your final cost is %d\n",totalcost);
printf("Thanks %s for choosing us and visit us again.\n",str);
getch();
}
