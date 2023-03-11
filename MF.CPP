#include<iostream.h>
#include<conio.h>

// "Friend with Multiple class"
class Calc2;
class Calc1
{
private:
	int no1;
public:
	void setNo1(int no1)
	{
		this->no1=no1;
	}
	void disp()
	{
		cout<<"\nCalc1 : No1 - "<<no1;
	}
	friend void swap(Calc1 &c1,Calc2 &c2);
};
class Calc2
{
private:
	int no2;
public:
	void setNo2(int no2)
	{
		this->no2=no2;
	}
	void disp()
	{
		cout<<"\nCalc2 : No2 - "<<no2;
	}
	friend void swap(Calc1 &c1,Calc2 &c2);
};
void swap(Calc1 &c1,Calc2 &c2)
{
	int temp;
	temp = c1.no1;
	c1.no1 = c2.no2;
	c2.no2 = temp;
}
void main()
{
	Calc1 c1;
	Calc2 c2;
	clrscr();

	c1.setNo1(10) ;
	c2.setNo2(20) ;

		c1.disp();
	c2.disp();


	swap(c1,c2);

	cout<<"\nAfter Swapping : " ;

	c1.disp();
	c2.disp();





	getch();
}





