#include<iostream>
#include<conio.h>
using namespace std;
class rectangle
{
	private:
		int len,bre;
	public:
		rectangle(int x,int y);
		~rectangle();
		void display();
};
rectangle :: rectangle(int x, int y)
{
	len=x;
	bre=y;
}
void rectangle :: display()
{
	cout<<"area of rectangle ="<<(len*bre)<<endl;
}
rectangle :: ~rectangle()
{
	cout<<"destructor is called\n";
}
main()
{
	rectangle c1=rectangle(5,4);
	c1.display();
	getch();
}
