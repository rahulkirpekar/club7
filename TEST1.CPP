#include<iostream.h>
#include<conio.h>

struct Studnet
{
	int rno;
	char name[50];
	int std;
};
void main()
{
	struct Student s;
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
