#include<stdio.h>
#include<conio.h>
main()
{
	float cal,far;
	int choice;
	printf("enter your choice\n");
	scanf("%d",&choice);
	switch(choice)
	{
	case 1:printf("enter the degree of calcius\n");
	scanf("%f",&cal);
	far=(cal*1.8)+32;
	printf("fahrenheit= %f",far);
	break;
	case 2:printf("enter the degree of far\n");
	scanf("%f",&far);
	cal=(far-32)/1.8;
	printf("calcius= %f",cal);
	break;
	 default : printf("wrong choice");
	
    }
	getch();
}
