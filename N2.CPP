#include<iostream.h>
#include<conio.h>
class Student
{
	// classObject---->class Properies = 1) Dm's + 2) Mf's
private: // 1) Data Members
	int rno;
	char name[5];
	int std;
public: // 2) member Function
	inline void Student :: scan();
	inline void Student :: disp();
};d
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
	cout<<"\n"<<this<<"---"<<rno<<"\t"<<name<<"\t"<<std;
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