#include<iostream>
#include<conio.h>
using namespace std;
class circle
{
	protected:
		int radius;
		float ar;
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
		int length,height;
		float cr;
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
	float vol;
	public:
		void volume()
		{
			vol=ar*height;
			cout<<"volume of cylinder ="<<vol<<endl;
		}
};
class tsa : public cylinder
{
	float t;
	public:
			void surfacearea()
			{
			 t=(2*3.14*radius)*(radius+height);
			 cout<<"total surface area of cylinder ="<<t<<endl;	
			}
};
class csa : public tsa
{
	float c;
	public:
		void curvesurfacearea()
		{
			c=2*3.14*radius*height;
			cout<<"curve surface area of cylinder ="<<c<<endl;
		}
};
main()
{
	csa x;
	x.area();
	x.parameter();
	x.volume();
	x.surfacearea();
	x.curvesurfacearea();
	getch();
}

