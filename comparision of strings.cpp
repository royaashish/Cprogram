#include<stdio.h>
#include<conio.h>
#include<string.h>
main()
{
	char str1[200],str2[100];
	int i=0,flag=0,len1,len2;
    printf("enter first string\n");
	gets(str1);
	printf("enter second string\n");
	gets(str2);
	len1=strlen(str1);
	len2=strlen(str2);
	printf("length of string1 : %d\n",len1);
	printf("length of string2 : %d\n",len2);
	while(i<len1 && i<len2)
	{
	if(str1[i]==str2[i])
    	{
		i++;
		continue;
    	}
	if(str1[i]<str2[i])
    	{
		flag=-1;
		break;
    	}
	if(str1[i]>str2[i])
    	{
		flag=1;
		break;
    	}
   }
   if(flag==0)
   {
   	printf("both string are equal\n");
   }
   if(flag==-1)
   {
   	printf("string1 is less than string2\n");
   }
   if(flag==1)
   {
   	printf("string1 is greater than string2\n");
   }
	getch();
}
