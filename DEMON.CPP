#include<iostream.h>
#include<conio.h>
class Calc
{
private:
	int no1;
public:
	Calc(int no1)
	{
		this->no1=no1;
	}
	void disp()
	{
		cout<<"\nNo1 : "<<no1<<"----"<<this;
	}
	friend Calc operator + (Calc &c1,Calc &c2);
};
// Binary(Global -by Friend) Operator Overloadding Function
Calc operator + (Calc &c1,Calc &c2)
{
	Calc temp(10);
    //   c3        c1    c2
	temp.no1 = c1.no1 + c2.no1;
	return temp;
}

void main()
{
	Calc c1(10),c2(20),c3(0);
	clrscr();

	c1.disp();
	c2.disp();
	c3.disp();

	c3 = c1 + c2;

	c3.disp();

	getch();
}


