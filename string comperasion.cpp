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
	if(strcmp(str1,str2)==0)
	{
	    printf("string1 and string2 is equal");
	}
	else
	{
		printf("string1 and string2 are different\n");
	}
	getch();
}
