#include<iostream.h>
#include<conio.h>
class RbiBank
{
public:
	virtual int getHomeLoanIntrst()=0;
};
class AxisBank : public RbiBank
{
public:
	int getHomeLoanIntrst()
	{
		return 10;
	}
};

class SbiBank : public RbiBank
{
public:
	int getHomeLoanIntrst()
	{
		return 6;
	}
};
class KotakBank : public RbiBank
{
public:
	int getHomeLoanIntrst()
	{
		return 12;
	}
};
void main()
{
	RbiBank *rptr;
	AxisBank axisBankUser;
	SbiBank sbiBankUser;
	KotakBank kotakBankUser;
	int choice;
	clrscr();
	cout<<"\nEnter below Choice : ";
	cout<<"\n1) for AxisBankUser : ";
	cout<<"\n2) for SbiBankUser : ";
	cout<<"\n3) for KotakBankUser : ";
	cin>>choice;

	switch(choice)
	{
		case 1: rptr = &axisBankUser;
			cout<<"\nAxisBank Home Loan Intrst : "<<rptr->getHomeLoanIntrst();
			break;

		case 2: rptr = &sbiBankUser;
			cout<<"\nSbiBank Home Loan Intrst : "<<rptr->getHomeLoanIntrst();
			break;
		case 3: rptr = &kotakBankUser;
			cout<<"\nKotakBank Home Loan Intrst : "<<rptr->getHomeLoanIntrst();
			break;
	}
	getch();
}

