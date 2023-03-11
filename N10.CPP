#include<iostream.h>
#include<conio.h>
class Calc
{
	int no1;
public:
	Calc(){}
	Calc(int no1)
	{
		this->no1=no1;
	}
	void disp()
	{
		cout<<"\nNo1 : "<<no1<<"---"<<this;
	}
	friend Calc operator + (Calc &c1,Calc &c2);
};
Calc operator + (Calc &c1,Calc &c2)
{
	Calc temp;
	//c3       c1      c2
	temp.no1 = c1.no1 + c2.no1;
	return temp;
}
void main()
{
	Calc c1(20),c2(10),c3;
	clrscr();
	c1.disp();
	c2.disp();
	c3 = c1 + c2;
	c3.disp();
	getch();
}