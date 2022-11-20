#include<stdio.h>
#include<conio.h>
#include<string.h>
main()
{
	char str[100];
	int i,word=1;
	printf("enter a sentense\n");
	gets(str);
	for(i=0;i<strlen(str);i++)
	{
		if(str[i]==' ')
		{
			word++;
		}
	}
	printf("number of words = %d\n",word);
	getch();
}
