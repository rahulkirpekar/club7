#include<iostream.h>
#include<conio.h>
#include<string.h>
class Employee
{
private:
	int id;
	char name[5];
	int std;
public:
	void setData(const int i,const char n[],const int s)
	{
		id=i;
		strcpy(name,n);
		std=s;
	}
	inline void disp();
};
inline void Employee :: disp()
{
	cout<<"\n"<<id<<"\t"<<name<<"\t"<<std;
}
void main()
{
	Employee e1;
	clrscr();
	// 10 lines---1,rahul,12

	e1.setData(1,"rahul",12);

	e1.disp();

	getch();
}