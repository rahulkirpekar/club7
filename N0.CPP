#include<iostream.h>
#include<conio.h>
#include<string.h>
class Student
{
private:
	int rno;
	char name[15];
	int std;
public:
	// Default Constructor
	Student()
	{
		cout<<"\nDEFAULT--Constructor Called - "<<this;
		rno=1;
		strcpy(name,"rahul");
		std=12;
	}
	Student(int rno,char name[],int std)
	{
		cout<<"\nPARA -- Constructor Called - "<<this;
		this->rno=rno;
		strcpy(this->name,name);
		this->std=std;
	}
	Student(Student &s)
	{
		cout<<"\nCOPY -- Constructor Called - "<<this;
		this->rno=s.rno;
		strcpy(this->name,s.name);
		this->std=s.std;
	}
	void disp()
	{
		cout<<"\n"<<rno<<"\t"<<name<<"\t"<<std;
	}
	~Student()
	{
		cout<<"\nDestructor called : "<<this;
	}
};
void main()
{
	clrscr();
	Student s1,s2(2,"Krunal",12);
	s1.disp();
	s2.disp();
	Student s3(s2);
	s3.disp();
	getch();
}