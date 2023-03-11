#include<iostream.h>
#include<conio.h>
#include<string.h>
class Student
{
	int rno;
	char name[45];
	int std;
public:
	// Default Constructor
	Student()
	{
		rno=1;
		strcpy(name,"rahul");
		std=12;
	}
	// Para Constructor
	Student(int rno,char name[],int std)
	{
		this->rno=rno;
		strcpy(this->name,name);
		this->std=std;
	}
	// Copy Constructor
	Student(Student &s)
	{
		this->rno=s.rno;
		strcpy(this->name,s.name);
		this->std=s.std;
	}
	// Destructor
	~Student()
	{
		cout<<"\nDestructor Called---"<<this;
	}
	void disp()
	{
		cout<<"\n"<<rno<<"\t"<<name<<"\t"<<std<<"----	"<<this;
	}
};
void main()
{
	Student s1,s2(2,"Krunal",12);
	clrscr();
	s1.disp();
	s2.disp();
	Student s3(s2);
	s3.disp();
	getch();
}

