#include<iostream.h>
#include<conio.h>
class Calc
{
private:
	int no1,no2;
public:
	Calc(int no1,int no2)
	{
		this->no1=no1;
		this->no2=no2;
	}
	void disp()
	{
		cout<<"\nNo1 : "<<no1;
		cout<<"\nNo2 : "<<no2;
	}
	friend void swap(Calc &c);
};
void swap(Calc &c)
{
	int temp;
	temp = c.no1;
	c.no1 = c.no2;
	c.no2 = temp;
}
void main()
{
	Calc c1(10,20);
	clrscr();
	c1.disp();
	cout<<"\nSwapping : ";
	swap(c1);
	c1.disp();
	getch();
}
