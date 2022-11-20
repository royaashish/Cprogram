#include<stdio.h>
#include<conio.h>
main()
{
	int a,b,c;
	printf("Enter a 2 digit none zero number : ");
	scanf("%d", &a);
	b = a%10;
	a = a/10;
	c = (b*10)+a;
	printf("number after interchange : %d",c);
	getch();
}
