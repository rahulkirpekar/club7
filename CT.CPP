#include<iostream.h>
#include<conio.h>
#include<string.h>
class Student
{
private:
	int rno;
	char name[50];
	int std;
public:
	// Default Constructor
	Student()
	{
		cout<<"\nSTART :: Default Constructor---"<<this;
		rno=1;
		strcpy(name,"rahul");
		std=12;
		cout<<"\nEXIT :: Default Constructor";
	}
	// Parameterised Constructor
	Student(int r,char n[],int s)
	{
		cout<<"\nSTART :: Para Constructor---"<<this;
		rno=r;
		strcpy(name,n);
		std=s;
		cout<<"\nEXIT :: Para Constructor";
	}
	// Copy Constructor
	Student(Student &s)
	{
		cout<<"\nSTART :: Copy Constructor---"<<this;
		rno = s.rno;
		strcpy(name,s.name);
		std=s.std;
		cout<<"\nEXIT :: Copy Constructor";
	}
	void disp()
	{
		cout<<"\n"<<rno<<"\t"<<name<<"\t"<<std<<"---"<<this;
	}
};
void main()
{
	clrscr();
	Student s1,s2(2,"Ankur",12);

	s1.disp();
	s2.disp();

	Student s3(s2);

	s3.disp();

	getch();
}