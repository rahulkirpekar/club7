#include<iostream.h>
#include<conio.h>
#include<string.h>
#include<stdio.h>

// pure/Strong Encapsulation
class Student
{
private:
	int rno;
	char name[50];
	int   std;
public:
	void scan()
	{
		cout<<"\nEnter Rno : " ;
		cin>>rno;
		flusahll();
		cout<<"\nEnter Name : " ;
		cin.getline(name,sizeof(name));

		cout<<"\nEnter Std : " ;
		cin>>std;
	}
	void disp()
	{
		cout<<"\n"<<rno<<"\t"<<name<<"\t"<<std;
	}
};
void main()
{
	Student s;
	clrscr();

	s.scan();

	s.disp();

	getch();
}