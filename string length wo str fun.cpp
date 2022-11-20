#include<stdio.h>
#include<conio.h>
main()
{
	char c[100];
	int i,len=0;
	printf("enter the character\n");
	scanf("%s",&c);
	for(i=0;c[i]!='\0';i++)
	{
		len++;
	}
	printf("the length of %s is %d",c,len);
	getch();
}
