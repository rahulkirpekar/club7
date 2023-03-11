#include<iostream.h>
#include<conio.h>
// Abstract class-can create object
class Vehicle
{
public:
	// pure virtual meethod--->abstract method--->
			// AbstractClass---can't create object
	virtual void getSpec()=0;
};
class TwUser : public Vehicle
{
public:
	void getSpec()
	{
		cout<<"\nTwUser : getSpec()";
	}
};
class LmvUser : public Vehicle
{
public:
	void getSpec()
	{
		cout<<"\nLmvUser : getSpec()";
	}
};
class HmvUser : public Vehicle
{
public:
	void getSpec()
	{
		cout<<"\nHmvUser : getSpec()";
	}
};
void main()
{
	Vehicle *vptr;
	TwUser twUserObj;
	LmvUser lmvUserObj;
	HmvUser hmvUserObj;
	clrscr();
	cout<<"\nEnter below choice : ";
	cout<<"\n1) For Two Wheeler";
	cout<<"\n2) For Car";
	cout<<"\n3) For Truck";
	int choice;
	cin>>choice;

	switch(choice)
	{
		case 1: vptr = &twUserObj;
			vptr->getSpec();
			break;

		case 2: vptr = &lmvUserObj;
			vptr->getSpec();
			break;

		case 3: vptr = &hmvUserObj;
			vptr->getSpec();
			break;
	}
	getch();
}