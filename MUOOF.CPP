#include<iostream.h>
#include<conio.h>
class Calc
{
private :
	int no1,no2;
public:
	Calc(int no1,int no2)
	{
		this->no1=no1;
		this->no2=no2;
	}
	void disp()
	{
		cout<<"\n"<<this<<"--No1 : "<<no1<<"\tNo2 : "<<no2;
	}
	friend void operator -(Calc &c);
};
// Gloabl(Friend) operator Overloadding Function
void operator -(Calc &c)
{
	c.no1 = -c.no1;
	c.no2 = -c.no2;
}
void main()
{
	Calc c1(20,10);
	clrscr();

	c1.disp();
	-c1	;
	c1.disp();

	getch();
}