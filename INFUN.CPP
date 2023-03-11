#include<iostream.h>
#include<conio.h>
#include<string.h>
// :: scope resolution operator
class Student
{
private:
	int rno;
	char name[10];
	int std;
public:
	inline void Student :: setData(const int rno,const char name[],const int std);
	inline void disp();
};
inline void Student :: setData(const int rno,const char name[],const int std)
{
	this->rno = rno;
	strcpy(this->name,name);
	this->std = std;
}
inline void Student :: disp()
{
	cout<<"\n"<<rno<<"\t"<<name<<"\t"<<std;
}
void main()
{
	Student s;
	clrscr();

	s.setData(1,"ESHAN",12);

	s.disp();


	getch();
}
