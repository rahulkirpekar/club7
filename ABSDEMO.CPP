#include<iostream.h>
#include<conio.h>
// abstract class
class Vehicle
{
public:
	// pure virtual function - abstract method
	virtual void spec() = 0;
};
class TW : public Vehicle
{
public:
};
class ActivaTW : public TW
{
public:
	void spec()
	{
		cout<<"\nActivaTW : spec()";
	}
};
class LMV : public Vehicle
{
public:
	void spec()
	{
		cout<<"\nLMV : spec()";
	}
};
class HMV : public Vehicle
{
public:
	void spec()
	{
		cout<<"\nHMV : spec()";
	}
};
void main()
{
	//Vehicle obj;
	//TW obj;
	// LMV obj;
	 //HMV obj;
	 ActivaTW obj;
	clrscr();

	obj.spec();


	getch();
}
