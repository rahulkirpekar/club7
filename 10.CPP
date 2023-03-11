#include<iostream.h>
#include<conio.h>
#include<string.h>

class Student
{
	// class Object----class Properties = 1) Dm's + 2) Mf's
	int rno;
	char name[14];
	int std;
public:
	void Student :: set(const int r,const char n[],const int s);
	void Student :: disp();
};
void Student :: set(const int r,const char n[],const int s)
{
	rno = r;
	strcpy(name,n);
	std=s;
}
void Student :: disp()
{
	cout<<"\n"<<rno<<"\t"<<name<<"\t"<<std;
}
void main()
{
	Student s1,s2;
	clrscr();

	s1.set(1,"rahul",12);
	s2.set(2,"krunal",12);

	s1.disp();
	s2.disp();
	getch();
}