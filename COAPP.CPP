#include<iostream.h>
#include<conio.h>
class Student
{
	// 1) class Data Members
public:
	int rno;
	char name[6] ;
	int std;
	// 2) Member Function--optional
};
void main()
{
	Student s;// object
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
