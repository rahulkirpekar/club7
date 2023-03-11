#include<iostream.h>
#include<conio.h>
class Vehicle
{
	int speed;
public:
	virtual void spec(int speed) = 0 ;
};
class TW : public Vehicle
{
	int speed;
public:
	void spec(int speed)
	{
		this->speed=speed;
		cout<<"\nTW---Vehicle - spec()--"<<speed;
	}
};
class LMV : public Vehicle
{
	int speed;
public:
	void spec(int speed)
	{
		cout<<"\nLMV---Vehicle - spec()--"<<speed;
	}
};
class HMV : public Vehicle
{
	int speed;
public:
	void spec(int speed)
	{
		cout<<"\nHMV---Vehicle - spec()--"<<speed;
	}
};
void main()
{
	Vehicle *vptr;
	//Vehicle vobj;
	TW twObj;
	LMV lmvObj;
	HMV hmvObj;

	clrscr();

	//vptr = &vobj;
	//vptr->spec(10);

	//vptr = &twObj;
	//vptr->spec(50);

	// Upcasting
	vptr = &lmvObj;
	vptr->spec(150);

	vptr = &hmvObj;
	vptr->spec(250);

	vptr = &twObj;
	vptr->spec(50);

	//vptr = &vobj;
	//vptr->spec(50);


	// DownCasting
	//((LMV*)vptr)->spec(150);


	getch();
}