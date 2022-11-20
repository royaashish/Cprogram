#include<stdio.h>
#include<conio.h>
#include<conio.h>
main()
{
	int userpassword[]={1234,2345,3456,4567,5678,6789,7890,8901,9012,1111},i,password,count=0,flag=0;
	do{
	printf("enter your 4 digit pincode\n");
	scanf("%d",&password);
	for(i=0;i<10;i++)
	{
	if(userpassword[i]==password)
	{
		printf("Authentication successful\n");
		flag=1;
		break;
	}
    }
	if(flag==0)
	{
    if(count!=2)
    printf("pin code wrong, try again. %d times over\n",count+1);
    else
    printf("pin code wrong. %d times over\n",count+1);
    count=count+1;
	}	
}
while(count>0 && count<3 && flag==0);
if(flag==0)
{
	printf("you exceeded your trail. Access denied and Account Blocked\n");
}
getch();
}
