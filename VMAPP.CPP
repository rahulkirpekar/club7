#include<iostream.h>
#include<conio.h>
//abstract class
class Vehicle
{
public:
	// pure virtual function---->abstract method
	virtual void getSpec() = 0;
};
class TwUser : public Vehicle
{
public:
	void getSpec()
	{
		cout<<"\nTwUser---getSpec()";
	}
};
class LmvUser : public Vehicle
{
public:
	void getSpec()
	{
		cout<<"\nLmvUser---getSpec()";
	}
};
class HmvUser : public Vehicle
{
public:
	void getSpec()
	{
		cout<<"\nHmvUser---getSpec()";
	}
};
void main()
{
	Vehicle *vptr;
	TwUser twUser;
	LmvUser lmvUser;
	HmvUser hmvUser;
	clrscr();
	cout<<"\nEnter your choice of Vehicle : ";
	cout<<"\n\t1) For Two Wheelar";
	cout<<"\n\t2) For Car ";
	cout<<"\n\t3) For Truck";
	int choice;
	cin>>choice;
	switch(choice)
	{
		case 1: vptr = &twUser;
			vptr->getSpec();
			break;

		case 2: vptr = &lmvUser;
			vptr->getSpec();
			break;

		case 3: vptr = &hmvUser;
			vptr->getSpec();
			break;

		default:
			cout<<"\nInvalid Choice of Vehicle ,\n\tPlease enter between 1 to 3.";
	}
	getch();
}