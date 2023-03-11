#include<iostream.h>
#include<conio.h>
class Calc
{
private:
	int no1;
public:
	Calc()
	{

	}
	Calc(int no1)
	{
		this->no1=no1;
	}
	void disp()
	{
		cout<<"\n"<<this<<" - No1 : "<<no1;
	}
	// Binary(Member) operator Overloadding function
	Calc operator + (Calc &c2)
	{
		Calc temp;
		//c3       c1    c2
		temp.no1 = no1 + c2.no1;
		return temp;
	}
};
void main()
{
	Calc c1(10),c2(20),c3;
	clrscr();
	c1.disp();
	c2.disp();
	c3 = c1 + c2;
	cout<<"\nAfter Calling operator Overloadding Function : ";
	c1.disp();
	c2.disp();
	c3.disp();


	getch();
}
