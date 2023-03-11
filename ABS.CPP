#include<iostream.h>
#include<conio.h>
class Vehicle
{
public:
	virtual void getSpec()=0;
};
class TwUser : public Vehicle
{
public:
	void getSpec()
	{
		cout<<"\nTwUser - getSpec()";
	}
};
class LmvUser : public Vehicle
{
public:
	void getSpec()
	{
		cout<<"\nLmvUser - getSpec()";
	}
};
class HmvUser : public Vehicle
{
public:
	void getSpec()
	{
		cout<<"\nHmvUser - getSpec()";
	}
};
void main()
{
	Vehicle *vptr;
	TwUser twUser;
	LmvUser lmvUser;
	HmvUser hmvUser;
	clrscr();
	cout<<"\nEnter for beloc Vihicle Choice : ";
	cout<<"\n1) For Two Vheelar";
	cout<<"\n2) For LMVUSER Vheelar";
	cout<<"\n3) For HMVUser Vheelar";
	int choice ;
	cin>>choice;

	switch(choice)
	{
		case 1: vptr = &twUser;
			((TwUser*)vptr)->getSpec();
			break;
		case 2: vptr = &lmvUser;
			((LmvUser*)vptr)->getSpec();
			break;
		case 3: vptr = &hmvUser;
			((HmvUser*)vptr)->getSpec();

			break;
	}
	getch();
}


