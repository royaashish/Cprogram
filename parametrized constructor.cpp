#include<iostream>
#include<conio.h>
using namespace std;
class cube
{
	private:
		int num;
	public:
		cube(int a);
		void display();
};
cube :: cube(int a)
{
	num=a;
}
void cube :: display()
{
	cout<<"cube = "<<(num*num*num)<<endl;
}
main()
{
	cube c(5);//implicit call (class_name obj_name(arg))
	c.display();
	cube d=cube(5);//explicit call (class_name obj_name=constructor(arg))
	d.display();
	getch();
}
