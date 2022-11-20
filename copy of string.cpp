#include<stdio.h>
#include<conio.h>
#include<string.h>
main()
{
	char str1[200],str2[100];
    printf("enter first string\n");
	gets(str1);
	printf("enter second string\n");
	gets(str2);
	strcpy(str2,str1);
	printf("copy of 1st string : %s",str1);
	getch();
}
