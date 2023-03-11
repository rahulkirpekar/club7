#include<iostream.h>
#include<conio.h>
#include<string.h>
class Student
{
	// class Variable(object)--->
	//	class Properties(private) = 1) Data members + 2) Member Function
private:
	int rno;
	char name[50];
	int std;
public:
	void scan();
	void disp();
};
// :: - Scope resolution Operator(MemberOf)
inline void Student :: scan()
{
	cout<<"\nEnter Rno : ";
	cin>>rno;
	cout<<"\nEnter Name : ";
	cin>>name;
	cout<<"\nEnter Std : ";
	cin>>std;
}
inline void Student :: disp()
{
	cout<<"\n"<<rno<<"\t"<<name<<"\t"<<std;
}
void main()
{
	Student s[5];
	int i;
	clrscr();

	for(i=0;i<5;i++)
	{
		s[i].scan();
	}
	for(i=0;i<5;i++)
	{
		s[i].disp();
	}
	getch();
}






