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
	void setData(int rno,char name[],int std)
	{
		this->rno=rno;
		strcpy(this->name,name);
		this->std=std;
	}
	inline void Student :: scan();
	inline void Student :: disp();
};
inline void Student :: scan()
{
	cout<<"\nEnter Rno : ";
	cin>>rno;
	cout<<"\nEnter Name : ";
	cin>>name;
	cout<<"\nEnter Std : ";
	cin>>std;
}
inline void Student :: disp()
{
	cout<<"\n"<<rno<<"\t"<<name<<"\t"<<std;
}
void main()
{
	Student s;
	clrscr();

	s.setData(1,"rahul",12);

	s.disp();


	getch();
}