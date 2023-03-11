//Friend Function with Multiple class:-
//-------------------------------------
#include<iostream.h>
#include<conio.h>
class Calc2;
class Calc1
{
private:
	int no1;
public:
	void setData(int n1)
	{
		no1 = n1;
	}
	void disp()
	{
		cout<<"\nCalc1---NO1 : "<<no1;
	}
	friend void swap(Calc1 &c1,Calc2 &c2);
};
class Calc2
{
private:
	int no2;
public:
	void setData(int n1)
	{
		no2 = n1;
	}
	void disp()
	{
		cout<<"\tCalc2---NO2 : "<<no2;
	}
	friend void swap(Calc1 &c1,Calc2 &c2);
};

// swapping ---Global method
void swap(Calc1 &c1,Calc2 &c2)
{
	int temp;
	temp = c1.no1;
	c1.no1=c2.no2;
	c2.no2=temp;
}
void main()
{
	Calc1 c1;
	Calc2 c2;
	clrscr();
	c1.setData(10);
	c2.setData(20);
	c1.disp();
	c2.disp();
	swap(c1,c2);
	cout<<"\n";
	c1.disp();
	c2.disp();
	getch();
}


