#include<iostream.h>
#include<conio.h>
class Student
{
public:
	// class Object---->[class Properties]= 1) DM's + 2) MF's
	// 1) Data Members
	int rno;
	char name[60];
	int std;
	// 2) member Function ---Optional
};
void main()
{
	Student s;
	clrscr();

	cout<<"\nEnter Rno : ";
	cin>>s.rno;
	cout<<"\nEnter Name : ";
	cin>>s.name;
	cout<<"\nEnter Std : ";
	cin>>s.std;


	cout<<"\n"<<s.rno<<"\t"<<s.name<<"\t"<<s.std;

	getch();
}
