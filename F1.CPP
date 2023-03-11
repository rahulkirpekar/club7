#include<iostream.h>
#include<conio.h>

/*
		DataType

	1) Primitive	2) NonPrimitive
	 (Built-In)	   (User Defined DataType)
	 char  		   struct,class
	 short
	 int
	 long
	 float
	 double
*/
void main()
{
	int no1,no2,ans;
	clrscr();

	cout<<"\nEnter Two Nos : ";
	cin>>no1>>no2;


	cout<<"\nNo1 : "<<no1;
	cout<<"\nNo2 : "<<no2;

	ans = no1+no2;

	cout<<"\nAddition : "<<ans;

	getch();
}




