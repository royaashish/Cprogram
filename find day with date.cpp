#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
char* months[]={"mar","apr","may","jun","jul","aug","sep","oct","nov","dec","jan","feb"};
char* days[]={"sunday","monday","tuesday","wednesday","thursday","friday","saturday"};
main()
{
int k,m,d,c,year,i,f,finalday,flag=0;
char str[3];
printf("enter date:\n");
scanf("%d",&k);
if(k<0||k>31)
{
	printf("invalid date\n");
	exit(0);
}
printf("enter first 3 letter of the month of year ex:-january as jan\n");
scanf("%s",&str);
for(i=0;i<12;i++)
{
	if(!strcmp(str,months[i]))
	{
	m=i+1;
	flag=1;
	break;	
	}
}
if(flag==0)
{
	printf("invalid month\n");
	exit(0);
}
printf("enter year\n");
scanf("%d",&year);
if(m==11||m==12)
{
	year=year-1;
}
d=year%100;
c=year/100;
f=(k+(((13*m)-1)/5)+d+(d/4)+(c/4))-(2*c);
if(f>=0)
{
finalday=f%7;	
}
else
{
	finalday=((f%7+7)%7);
}
printf("the day of given %d,%s %d is \n%s\n",k,str,year,days[finalday]);
getch();
}
