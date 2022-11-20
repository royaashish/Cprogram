#include<stdio.h>
#include<conio.h>
#include<string.h>
main()
{
	int len;	
	char str1[100];
	printf("enter the string\n");
	gets(str1);
	len=strlen(str1);
	printf("length of string : %d\n",len);
	getch();
}
