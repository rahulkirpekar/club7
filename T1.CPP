#include<iostream.h>
#include<conio.h>
class Student
{
private:
	int rno;
	char name[15];
	int std;
public:
	inline void Student :: scan();
	inline void Student :: disp();
};
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
