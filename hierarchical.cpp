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
			cout<<"enter the name and roll no of student\n";
			cin>>roll>>name;
		}
		void putdata()
		{
			cout<<"roll no. of student is "<<roll<<endl;
			cout<<"name of student is "<<name<<endl;
		}
};
class commerce : public student
{
	int sub1,sub2,total;
	public:
		void getdata()
		{
			readdata();
			cout<<"enter the marks of sub1 and sub2:\n";
			cin>>sub1>>sub2;
		}
		void display()
		{
			cout<<"details of commerce's students:\n";
			putdata();
			total=sub1+sub2;
			cout<<"marks of sub1 :"<<sub1<<endl;
			cout<<"marks of sub2 :"<<sub2<<endl;
			cout<<"total marks ="<<total<<endl;
		}
};
class science : public student
{
	int sub1,sub2,total;
	public:
		void getdata()
		{
			readdata();
			cout<<"enter the marks of sub1 and sub2:\n";
			cin>>sub1>>sub2;
		}
		void display()
		{
			cout<<"details of science's students:\n";
			putdata();
			total=sub1+sub2;
			cout<<"marks of sub1 :"<<sub1<<endl;
			cout<<"marks of sub2 :"<<sub2<<endl;
			cout<<"total marks ="<<total<<endl;
		}
};
class art : public student
{
	int sub1,sub2,total;
	public:
		void getdata()
		{
			readdata();
			cout<<"enter the marks of sub1 and sub2:\n";
			cin>>sub1>>sub2;
		}
		void display()
		{
			cout<<"details of Art's students:\n";
			putdata();
			total=sub1+sub2;
			cout<<"marks of sub1 :"<<sub1<<endl;
			cout<<"marks of sub2 :"<<sub2<<endl;
			cout<<"total marks ="<<total<<endl;
		}
};
main()
{
	commerce s;
	s.getdata();
	s.display();
	science c;
	c.getdata();
	c.display();
	art a;
	a.getdata();
	a.display();
	getch();
}
