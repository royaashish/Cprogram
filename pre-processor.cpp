#include<stdio.h>
#include<conio.h>
#include<math.h>
#define pi 3.14159
main()
{
	float radius,arcircle,circircle;
	printf("enter radius:\n");
	scanf("%f",&radius);
	arcircle=pi*pow(radius,2);
	circircle=2*pi*radius;
	printf("area of circle : %f\ncircumference of circle : %f\n",arcircle,circircle);
	getch();
}
