#include<iostream.h>
#include<conio.h>
#include<string.h>
class Student
{
	int rno;
	char name[45];
	int std;
public:
	Student()
	{
		cout<<"\nStart :: Default Constructor - " <<this;
		rno = 1;
		strcpy(name,"rahul");
		std=12;
		cout<<"\nEXIT :: Default Constructor - " <<this;
	}
	Student(int r,char n[],int s)
	{
		cout<<"\nStart :: PARA Constructor - " <<this;
		rno=r;
		strcpy(name,n);
		std=s;
		cout<<"\nExit :: PARA Constructor - " <<this;

	}
	void disp()
	{
		cout<<"\n"<<rno<<"\t"<<name<<"\t"<<std<<"---"<<this;
	}
};
void main()
{
	clrscr();
	Student s1,s2(2,"Krunal",12);

	s1.disp();
	s2.disp();

	getch();
}