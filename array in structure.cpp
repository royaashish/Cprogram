#include<stdio.h>
#include<conio.h>
#include<string.h>
struct student
{
	int roll;
	char name[20];
};
main()
{
	int i;
	struct student s[5];
	for(i=0;i<4;i++)
	{
		printf("enter the roll no. of %d students:\n",i+1);
		scanf("%d",&s[i].roll);
		printf("enter the name of %d students:\n",i+1);
		scanf("%s",&s[i].name);
	}
	printf("\nroll no. \tname\n");
	for(i=0;i<5;i++)
	{
		printf("%d\t\t%s\n",s[i].roll,s[i].name);
	}
	getch();
}
