#include<iostream.h>
#include<conio.h>

class Calc
{
	int no1,no2;
public:
	Calc(int no1,int no2)
	{
		this->no1=no1;
		this->no2=no2;
	}
	void disp()
	{
		cout<<"\nNO1 : "<<no1<<"\tNo2 : "<<no2<<"---"<<this;
	}
	friend Calc operator + (Calc &c1,Calc &c2);
};
Calc operator + (Calc &c1,Calc &c2)
{
	Calc temp(0,0);
	//  c3      c1     c2
	temp.no1 = c1.no1 + c2.no1;
	temp.no2 = c1.no2 + c2.no2;
	return temp;
}
void main()
{
	Calc c1(10,20),c2(30,40),c3(0,0);
	clrscr();
	c1.disp();
	c2.disp();

	c3 = c1 + c2;

	c3.disp();
	getch();
}