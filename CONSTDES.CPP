#include<iostream.h>
#include<conio.h>
class Student
{
public:
	Student()
	{
		cout<<"\nDefault Constructor Called---"<<this;
	}
	Student(int rno)
	{
		cout<<"\nPara Constructor Called---"<<this;
	}
	// Destructor
	~Student()
	{
		cout<<"\nDestructor Called---"<<this;
	}
};
void main()
{
	clrscr();

	Student s1,s2,s3,s4,s5;


	getch();
}
