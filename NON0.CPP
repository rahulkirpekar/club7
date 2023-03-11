#include<iostream.h>
#include<conio.h>
class Calc2;
class Calc1
{
	int no1;
public:
	void set(int no1)
	{
		this->no1=no1;
	}
	void disp()
	{
		cout<<"\nCalc1---No1 : "<<no1;
	}
	friend void swap(Calc1 &c1,Calc2 &c2);
};
class Calc2
{
	int no1;
public:
	void set(int no1)
	{
		this->no1=no1;
	}
	void disp()
	{
		cout<<"\nCalc2---No1 : "<<no1;
	}
	friend void swap(Calc1 &c1,Calc2 &c2);
};

// Global Function
void swap(Calc1 &c1,Calc2 &c2)
{
	int temp ;
	temp = c1.no1;
	c1.no1 = c2.no1;
	c2.no1 = temp;
}
void main()
{
	Calc1 c1;
	Calc2 c2;
	clrscr();
	c1.set(10);
	c2.set(20);
	c1.disp();
	c2.disp();
	swap(c1,c2);
	cout<<"\nAfter swap called : ";
	c1.disp();
	c2.disp();
	getch();
}