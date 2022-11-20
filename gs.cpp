#include<stdio.h>
#include<conio.h>
main()
{
	int bsal,da,hr,gs;
	// here bsal means basic salary, da means dearness allowance, hr means house rent, gs means gross salary
	printf("enter basic salary : ");
	scanf("%d",&bsal); // here basic salary entered by user
	da = (bsal*40)/100; // here we calculate dearness allowance at 40% of basic salary
	hr = (bsal*20)/100; // here we calculate house rent at 20% of basic salary
	gs = bsal+da+hr; // here we calculate gross salary
	printf("gross salary of Ramesh : %d",gs);
	getch();
}
