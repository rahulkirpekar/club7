#include<iostream.h>
#include<conio.h>
#include<string.h>

class Student
{
private:
	int rno;
	char name[50];
	int std;
public:
	// Default Constructor
	Student()
	{
		cout<<"\nStart :: Default Construtcor"<<"---"<<this;
		rno=1;
		strcpy(name,"rahul");
		std=12;
		cout<<"\nExit :: Default Construtcor";
	}
	// Para Constructor
	Student(int r,char n[],int s)
	{
		cout<<"\nStart :: Para Construtcor"<<"---"<<this;
		rno=r;
		strcpy(name,n);
		std=s;
		cout<<"\nExit :: Para Construtcor";
	}
	void disp()
	{
		cout<<"\n"<<rno<<"\t"<<name<<"\t"<<std<<"---"<<this;
	}
};
void main()
{
	clrscr();
	Student s1,s2(2,"Eshan",12);

	s1.disp();
	s2.disp();

	getch();
}