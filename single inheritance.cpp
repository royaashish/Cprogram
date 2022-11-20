#include<iostream>
#include<conio.h>
using namespace std;
class square
{
	protected:
		int length,ar;
	public:
		void putdata()
		{
			cout<<"enter the length of the square:\n";
			cin>>length;
		}
		void area()
		{
			ar=length*length;
			cout<<"area of square ="<<ar<<endl;
		}
};
class rectangle : public square
{
	private:
		int bredth;
	public:
		void getdata()
		{
			putdata();
			cout<<"enter the bredth of the square:\n";
			cin>>bredth;
		}
		void display()
		{
			area();
			ar=length*bredth;
			cout<<"area of rectangle ="<<ar<<endl;
		}
		
};
main()
{
	rectangle r;
	r.getdata();
	r.display();
	getch();
}
