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
	strupr(str1);
	{
		printf("string in capital letters : %s\n",str1);
	}
	strlwr(str2);
	strrev(str1);
	printf("string in small letters : %s\n",str2);
	printf("reverse of string1 : %s\n",str1);
	getch();
}
