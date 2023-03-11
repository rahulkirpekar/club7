#include<iostream.h>
#include<conio.h>
void addFun(int no1=10,int no2=20,int no3)
{
	int ans;
	ans = no1+no2+no3;
	cout<<"\nAddition : "<<ans;
}
void main()
{
	clrscr();

	addFun(1);

	getch();
}