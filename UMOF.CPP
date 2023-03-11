#include<iostream.h>
#include<conio.h>
/*
	c3	c1	c2
	no1	no1	no1
	c3 = c1 + c2;
*/
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
		cout<<"\n"<<this<<"--- No1 : " <<no1;
	}
	friend Calc operator + (Calc &c1 , Calc &c2);
};
// Binary(Global-By Friend)Operator Overloadding Function
Calc operator + (Calc &c1 , Calc &c2)
{
	Calc temp(0);
	//  c3   =   c1 +  c2
	  temp.no1 = c1.no1 + c2.no1;
	//       c3
	  return temp;
}
void main()
{
	Calc c1(20),c2(10),c3(0);
	clrscr();
	c1.disp();
	c2.disp();
	c3.disp();
	c3 = c1 + c2;
	cout<<"\nAfter Caling : ";
	c3.disp();
	getch();
}