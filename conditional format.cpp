#include<stdio.h>
#include<conio.h>
main()
{
	int a,b,c,g,s,m;
	printf("enter the three number\n");
	scanf("%d%d%d",&a,&b,&c);
	g=(((a>b)?a:b)>c)?((a>b)?a:b):c;
	s=(((a<b)?a:b)<c)?((a<b)?a:b):c;
	m=(a+b+c)-(g+s);
	printf("smaller number\t = %d\n",s );
	printf("middle number\t = %d\n" ,m);
	printf("greater number\t = %d\n",g);
	getch();
}
