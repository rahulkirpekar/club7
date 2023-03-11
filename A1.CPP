#include<iostream.h>
#include<conio.h>
class A
{
public:
	int no1;
};
// virtuallly inherited by A class
class B : public virtual A
{
public:
	int no2;
};
// virtuallly inherited by A class
class C : virtual public A
{
public:
	int no3;
};
class D : public B,public C
{
public:
	int no4;
};
void main()
{
	D obj;
	clrscr();

	// Deadly Diamond Problem
	obj.no1=10;// raised ambiguity problem

	cout<<"\nobj.no1 : "<<obj.no1;

	getch();
}