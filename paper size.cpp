#include<conio.h>
#include<stdio.h>
main()
{
int length, bredth;
length = 1189;
bredth = 841;
printf("A0 to A8 paper sizes\n");
for(int i=0; i <= 8; i++)
{
	printf("size of A%d sheet : %d mm x %d mm\n", i, length, bredth);
	length = length/2;
}
getch();
}
