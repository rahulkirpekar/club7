#include<iostream.h>
#include<conio.h>
// abstract class ---
class Vehicle
{
public:
	// pure virtual method / abstarct method
	virtual void getSpec() = 0;
};
class TW : public Vehicle
{
public:
	void getSpec()
	{
		cout<<"\nTW - TW specific-- Specification";
	}
};
class LMV : public Vehicle
{
public:
	void getSpec()
	{
		cout<<"\nLMV - LMV specific Specification";
	}
};
class HMV : public Vehicle
{
};
class ElecVehicle : public HMV
{
public:
	void getSpec()
	{
		cout<<"\nElecVehicle - HMV - Specification";
	}
};
void main()
{
	TW obj1;
	LMV obj2;
	//HMV obj3;
	ElecVehicle obj3;
	clrscr();

	obj1.getSpec();
	obj2.getSpec();
	obj3.getSpec();


	getch();
}

