#include<iostream.h>
#include<conio.h>
#include<string.h>
class Student
{
	int rno;
	char name[15];
	int std;
public:
	Student()
	{
		cout<<"\nDefault Constructor - "<<this;
	}
	~Student()
	{
		cout<<"\nDestructor Called - "<<this;

	}
	void setName(char name[])
	{
		strcpy(this->name,name);
	}
	char* getName()
	{
		char *p = &name[0];
		return p;
	}
};
void main()
{
	clrscr();
	Student s1,s2,s3;
	cout<<"\n--------------------\n";


	getch();
}