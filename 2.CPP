#include<iostream.h>
#include<conio.h>
void main()
{
	int no1,no2,ans,choice;
	clrscr();
	cout<<"\nEnter No1 : ";
	cin>>no1;
	cout<<"\nEnter No2 : ";
	cin>>no2;
	cout<<"\nEnter below choice : ";
	cout<<"\n1) For +";
	cout<<"\n2) For -";
	cout<<"\n3) For *";
	cout<<"\n4) For /";
	cin>>choice;
	switch(choice)
	{
		case 1: ans = no1+no2;
			cout<<"\nAddition : "<<ans;
			break;
		case 2: ans = no1-no2;
			cout<<"\nSubtraction : "<<ans;
			break;
		case 3: ans = no1*no2;
			cout<<"\nMultiply :"<<ans;
			break;
		case 4: ans = no1/no2;
			cout<<"\nDivision : "<<ans;
			break;
		default:
			cout<<"\nInvalid Choice,\n\tPlease enter between 1 to 4 choice";
	}
	getch();
}