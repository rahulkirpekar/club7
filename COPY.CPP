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
	Student()
	{
		rno=1;
		strcpy(name,"rahul");
		std=12;
	}
	Student(int rno,char name[],int std)
	{
		this->rno=rno;
		strcpy(this->name,name);
		this->std=std;
	}
	Student(Student &s)
	{
		rno=s.rno;
		strcpy(name,s.name);
		std=s.std;
	}
	void disp()
	{
		cout<<"\n"<<rno<<"\t"<<name<<"\t"<<std<<"---"<<this;
	}
};
void main()
{
	Student s1,s2(2,"krunal",12);
	clrscr();

	Student s3(s2);

	s1.disp();
	s2.disp();
	s3.disp();


	getch();
}
