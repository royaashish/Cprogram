#include<stdio.h>
#include<conio.h>
#include<string.h>
main()
{
	int i;
	char str1[100],str2[100];
	printf("enter the sentense to convert upper to lower and vice versa\n");
	scanf("%s",&str1);
	for(i=0;i<strlen(str1);i++)
	{
		if(str1[i]>='a'&& str1[i]<='z')
		{
			str2[i]=str1[i]-32;
		}
		    else if(str1[i]>='A'&& str1[i]<='Z')
		{
			str2[i]=str1[i]+32;
		}
	      	else
	      	  {
	      		str2[i]=str1[i];
			  }
	}
	
	printf("the converted sentence is %s\n",str2);
	getch();
}
