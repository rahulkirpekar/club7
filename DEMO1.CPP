#include<iostream.h>
#include<conio.h>
class Student
{
	// private scope--->class object---class Properies = 1) Data Members + 2) Member Function
private:
	//1) Data Members
	int rno;
	char name[50];
	int std;
public:
	// 2) Member Function
	void scan()
	{
		cout<<"\nEnter Rno : ";
		cin>>rno;
		cout<<"\nEnter Name : ";
		cin>>name;
		cout<<"\nEnter STd : ";
		cin>>std;
	}
	void disp()
	{
		cout<<"\n"<<rno<<"\t"<<name<<"\t"<<std;
	}
};
void main()
{
	Student s1,s2,s3;
	clrscr();

	s1.scan();
	s2.scan();
	s3.scan();

	s1.disp();
	s2.disp();
	s3.disp();

	getch();
}
