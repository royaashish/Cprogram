#include<stdio.h>
#include<conio.h>
#include<string.h>
struct employee
{
	int age,salary;
	char name[20];
};
main()
{
	struct employee a,b;
	printf("enter the name of the first employee:\n");
	scanf("%s",&a.name);
	printf("enter the age of the first employee:\n");
	scanf("%d",&a.age);
	printf("enter the salary of the first employee:\n");
	scanf("%d",&a.salary);
	printf("enter the name of the second employee:\n");
	scanf("%s",&b.name);
	printf("enter the age of the secon employee:\n");
	scanf("%d",&b.age);
	printf("enter the salary of the second employee:\n");
	scanf("%d",&b.salary);
	printf("details of both employees\n");
	printf("age\tname\t\tsalary\n");
	printf("%d\t%s\t\t%d\n",a.age,a.name,a.salary);
	printf("%d\t%s\t\t%d",b.age,b.name,b.salary);
	getch();
}

