#include<iostream.h>
#include<conio.h>

void main()
{
	int no1,no2,ans;
	clrscr();
/*
	cout---Ostream
	cin---Istream

		 IOS
		  |
	--------------------
	    |             |
	  cout           cin
	Ostream		Istream
	  |                |
	  -------------------
		   |
		 Iostream
*/
	cout<<"\nEnter Two Nos : ";
	cin>>no1>>no2;

	/*cout<<"\nEnter No1 : ";
	cin>>no1;
	cout<<"\nEnter No2 : ";
	cin>>no2;*/



	cout<<"\nNo1 : "<<no1;
	cout<<"\nNo2 : "<<no2;


	ans = no1+no2;

	cout<<"\nAddition : "<<ans;






	// cout --- Console Outpustream
	// << Insertion operator
	// cascadding
	// cout - Object---Ostream
	//cout<<"Hello World"<<"\nHello World"<<"\nHello World"<<"\nHello World";





	getch();
}