#include<iostream.h>
#include<conio.h>
class Student
{
	// class object--->class Properties = 1) Data Members + 2) Member Function--optional
	// scope = [private,protected + public]
	// 1) Data Members default scope---->private
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
	Student s[5];// s[0],...s[4] s---->[rno name std]
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