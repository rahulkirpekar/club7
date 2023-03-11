#include<iostream.h>
#include<conio.h>
class BaseClass
{
public:
	int b;
	void show()
	{
		cout<<"\nBaseClass : show()---b---"<<b;
	}
};
class DerivedClass : public BaseClass
{
public:
	int d;
	void show()
	{
		cout<<"\nDerivedClass : show()---d---"<<d;
	}
};
void main()
{
	BaseClass *bptr;
	BaseClass bobj;
	clrscr();

	bptr = &bobj;

	bptr->b=100;
	bptr->show();

	DerivedClass dobj;



	// Upcasting ----Parent Pointer---->ChildObject
	bptr = &dobj;	// Runtime Polymorphism

	bptr->b=100;
	bptr->show();

	// DownCasting---Parent Pointer Convert into ChildPOinter at CompileTime.
	((DerivedClass *)bptr)->d=200;
	((DerivedClass *)bptr)->show();


	getch();
}

