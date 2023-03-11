#include<iostream.h>
#include<conio.h>
class B
{
private:
	int a;
public:
	int b;
	void set_ab()
	{
		a=5;
		b=10;
	}
	int getA()
	{
		return a;
	}
	void showa()
	{
		cout<<"A - "<<a;
	}
};
class D : public B
{
private:
	int c;
public:
	void mul()
	{
		c = b*getA();
	}
	void disp()
	{
		cout<<"\na : "<<getA();
		cout<<"\nb : "<<b;
		cout<<"\nc : "<<c;
	}
};
void main()
{
	D d;
	clrscr();
	d.set_ab();// true
	d.mul();// true
	d.showa();// true
	d.disp();// true
	d.b = 20;//true
	d.mul();// true
	d.disp();//true


	getch();
}