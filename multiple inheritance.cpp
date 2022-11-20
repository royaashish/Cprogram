#include<iostream>
#include<conio.h>
using namespace std;
class circle
{
	protected:
		int radius,ar;
	public:
		void area()
		{
			cout<<"enter the radius of circle:\n";
			cin>>radius;
			ar=3.14*radius*radius;
			cout<<"area of circle ="<<ar<<endl;
		}
};
class rectangle
{
	protected:
		int length,height,cr;
	public:
		void parameter()
		{
			cout<<"enter the length and bredth of rectangle:\n";
			cin>>length>>height;
			cr=2*(length+height);
			cout<<"parameter of rectangle ="<<cr<<endl;
		}
};
class cylinder : public circle , public rectangle
{
	int vol;
	public:
		void volume()
		{
			vol=ar*height;
			cout<<"volume of cylinder ="<<vol<<endl;
		}
};
main()
{
	cylinder c;
	c.area();
	c.parameter();
	c.volume();
	getch();
}

