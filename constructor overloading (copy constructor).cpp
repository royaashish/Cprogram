#include<iostream>
#include<conio.h>
using namespace std;
class circle
{
	private:
		int radius;
		float area;
	public:
		circle()
		{
		radius=0;
		}
		circle(int r)
		{
		radius =r;
		}
		circle(circle &c1)
		{
		radius=c1.radius;	
		}
		void calculate()
		{
		area=3.14*radius*radius;
		}
		void display()
		{
		cout<<"radius ="<<radius<<endl;
		cout<<"area ="<<area<<endl;
		}
};
main()
{
circle c1(10);
circle c2(c1);
circle c3;
c1.calculate();
c2.calculate();
c3.calculate();
c1.display();
c2.display();
c3.display();
getch();
}
