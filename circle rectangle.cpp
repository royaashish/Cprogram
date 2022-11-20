#include<stdio.h>
#include<conio.h>
main()
{
	int length, breadth, radius, ar, pr, ac, circumference;
	printf("enter the length and breadth of a rectangle : \n");
	scanf("%d%d", &length, &breadth);
	ar = length*breadth;
	printf("area of rectangle : %d\n", ar);
	pr = 2*(length + breadth);
	printf("perimeter of rectangle : %d\n", pr);
	printf("enter the radius of the circle : ");
	scanf("%d", &radius);
	ac = 3.14*radius*radius;
	printf("area of circle : %d\n", ac);
	circumference = 2*3.14*radius;
	printf("circumference of the circle : %d", circumference);
	getch();
	
}
