#include<iostream.h>
#include<conio.h>
class Student
{
	// private - within class
	// protected
	// public -- can access everywhere
	// class variable[object]--[scope--[private,protected,public]]-----
		    //	class Properties = 1) Dm's + 2) Mf's
private:
	int rno;
	char name[50];
	int std;
public:
	void scan()
	{
		cout<<"\nEnter Rno : ";
		cin>>rno;
		cout<<"\nEnter Name : ";
		cin>>name;
		cout<<"\nEnter Std : ";
		cin>>std;
	}
	void disp()
	{
		cout<<"\n"<<rno<<"\t"<<name<<"\t"<<std;
	}
};
void main()
{
	Student s[5];// s--object[rno name std]
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




