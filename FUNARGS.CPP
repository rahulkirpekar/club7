#include<iostream.h>
#include<conio.h>
// Default Arguments---R--L
//	    <=======================
//		 3	  2          1<---Default Args rule
//               1        2          3<---calling value
void addFun(int no1,int no2=200,int no3=300)
{
	int ans;

	cout<<"\nNo1 : "<<no1;
	cout<<"\nNo2 : "<<no2;
	cout<<"\nNo3 : "<<no3;

	ans = no1+no2+no3;

	cout<<"\nAddition : "<<ans;
}
void main()
{
	clrscr();

	// L---R
	addFun(10,20,30);

	getch();
}
