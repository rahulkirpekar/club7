#include<iostream.h>
#include<conio.h>
#include<string.h>
class Student
{
private:
	int rno;
	char name[5];
	int std;
public:
	// Default
	Student()
	{
		cout<<"\nSTART ::  Default Constructor : "<<this;
		rno=1;
		strcpy(name,"rahul");
		std=12;
		cout<<"\nEXIT ::  Default Constructor";
	}
	// Para Constructor
	Student(int rno,char name[],int std)
	{
		cout<<"\nSTART ::  PARA Constructor : "<<this;
		this->rno=rno;
		strcpy(this->name,name);
		this->std=std;
		cout<<"\nEXIT ::  PARA Constructor";
	}
	// COPY
	Student(Student &s)
	{
		cout<<"\nSTART ::  COPY Constructor : "<<this;
		this->rno=s.rno;
		strcpy(this->name,s.name);
		this->std=s.std;
		cout<<"\nEXIT ::  COPY Constructor";
	}
	void disp()
	{
		cout<<"\n"<<rno<<"\t"<<name<<"\t"<<std<<"----"<<this;
	}
	// Destructor
	~Student()
	{
		cout<<"\nDestructor Called : "<<this;
	}
};
void main()
{
	clrscr();
	Student s1,s2(2,"krunal",12);
	s1.disp();
	s2.disp();

	Student s3(s2);
	s3.disp();
	getch();
}
