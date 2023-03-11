#include<iostream.h>
#include<conio.h>
// abstract class---can't create object opf ab class
class Vehicle
{
public:
	// pure virtual function---abstarct method
	virtual void  getSpec()=0;
};

class ElecVehicle : public Vechile
{
public:

};
class TwUser : public ElecVehicle
{
public:
	void getSpec()
	{
		cout<<"\nTw User --- getSpec()";
	};
};
class LmvUser : public Vehicle
{
public:
	void getSpec()
	{
		cout<<"\nLmv User --- getSpec()";
	};
};
class HmvUser : public Vehicle
{
public:
	void getSpec()
	{
		cout<<"\nHmv User --- getSpec()";
	};
};
void main()
{
	TwUser obj;
	clrscr();

	obj.getSpec();

	getch();
}



