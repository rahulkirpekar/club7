#include<iostream.h>
#include<conio.h>

// Default Arguments
//	      <-------------------------
void addFun(int no1=10,int no2=20,int no3=30)
{
	cout<<"\nNo1 : "<<no1;
	cout<<"\nNo2 : "<<no2;
	cout<<"\nNo3 : "<<no3;
	cout<<"\nAddition : "<<(no1+no2+no3);

}
void main()
{
	clrscr();

	addFun();

	getch();
}