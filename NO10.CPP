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
	void Student :: set(int rno,char name[],int std);
	void Student :: disp();
};
void Student :: set(int rno,char name[],int std)
{
	this->rno=rno;
	strcpy(this->name,name);
	this->std=std;
}
void Student :: disp()
{
	cout<<"\n"<<rno<<"\t"<<name<<"\t"<<std;
}
void main()
{
	Student s;
	clrscr();

	s.set(1,"rahul",12);

	s.disp();


	getch();
}