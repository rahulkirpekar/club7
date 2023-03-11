#include<iostream.h>
#include<conio.h>

//Single Inheritance
/*
	private - within class

	protected - can access in same class + immigiate child class

	public - can access everywhere

*/
class A
{
private:
	int no1;//--------X
protected:
	int no2;
public:
	int no3;
};
class B : public A
{
private:
	int no4;
protected:
	int no5;
	int no2;
public:
	int no6;
	int no3;
	void add()
	{
		int ans;
		no2=20;
		no3=30;
		no4=40;
		ans = no2+no3+no4;
		cout<<"\nAddition : "<<ans;
	}
};
void main()
{
	B obj;
	clrscr();

	obj.add();

	getch();
}
