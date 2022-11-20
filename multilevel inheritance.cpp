#include<iostream>
#include<conio.h>
using namespace std;
class student
{
	private:
		int roll;
		char name[20];
	public:
		void readdata()
		{
			cout<<"enter the roll no and name of the student\n";
			cin>>roll>>name;
		}
		void putdata()
		{
			cout<<"roll no. of student is "<<roll<<endl;
			cout<<"name of student is "<<name<<endl;
		}
};
class test : public student
{
	protected:
		int sub1,sub2;
	public:
		void getdata()
		{
			readdata();
			cout<<"enter the marks of sub1 and sub2:\n";
			cin>>sub1>>sub2;
		}
		void display()
		{
			putdata();
			cout<<"marks of sub1 :"<<sub1<<endl;
			cout<<"marks of sub2 :"<<sub2<<endl;
		}
};
class total : public test
{
	int tm;
	public:
		void sum()
		{
			tm=sub1+sub2;
			cout<<"total marks ="<<tm<<endl;
		}
};
main()
{
total t;
t.getdata();
t.display();
t.sum();
getch();
}
