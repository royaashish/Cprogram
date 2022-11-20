#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
main()
{
	FILE *file;
	char c;
	file=fopen("file12.txt","r");
	while(1)
	{
		if(file==NULL)
		{
			printf("file not found\n");
			exit(0);
		}
		else
		{
			c=fgetc(file);
			if(c==EOF)
			{
				break;
			}
			printf("%c",c);
		}
	}
	fclose(file);
	getch();
}
