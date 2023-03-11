#include<iostream.h>
#include<conio.h>
// CompileTime Polymorphism
class A
{
public:
	void show()
	{
		cout<<"\nA : show()";
	}
};
class B : public A
{
public:
	void show()
	{
		cout<<"\nB : show()";
	}
};
void main()
{
	B bobj;
	clrscr();

	bobj.show();
	bobj.A::show();

	getch();
}
