#include<iostream.h>
#include<conio.h>
class Calc
{
private:
	int no1,no2;
public:
	void set(const int no1,const int no2)
	{
		this->no1 = no1;
		this->no2 = no2;
	}
	void disp()
	{
		cout<<"\nNo1 : "<<no1<<"\tNO2 : "<<no2;
	}
	friend void swap(Calc &c1);
};
void swap(Calc &c1)
{
	int temp;

	temp = c1.no1;
	c1.no1 = c1.no2;
	c1.no2 = temp;
}
void main()
{
	Calc c1;
	clrscr();
	c1.set(10,20);
	c1.disp();
	cout<<"\nAfter Swapping : ";
	swap(c1);
	c1.disp();


	getch();
}