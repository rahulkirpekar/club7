#include<iostream.h>
#include<conio.h>
class Calc
{
private:
	int no1,no2;
public:
	void setData(int n1,int n2)
	{
		no1=n1;
		no2=n2;
	}
	void disp()
	{
		cout<<"\nNo1 : "<<no1<<"\tNo2 : "<<no2;
	}
	friend void swap(Calc &c);
};
// global method
void swap(Calc &c)
{
	int temp;
	temp = c.no1;
	c.no1 = c.no2;
	c.no2 = temp;
}
void main()
{
	Calc obj;// no1 no2
	clrscr();

	obj.setData(10,20); //obj---no1 --10 / no2 --20
	obj.disp();
	swap(obj);
	cout<<"\nAfter Swap function call : ";
	obj.disp();
	getch();
}
