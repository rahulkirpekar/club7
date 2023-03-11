#include<iostream.h>
#include<conio.h>
typedef void (*FunPtr) (int ,int);
void addFun(int no1,int no2)
{
	int ans;
	ans = no1+no2;
	cout<<"\nAddition : " <<ans;
}
void subFun(int no1,int no2)
{
	int ans;
	ans = no1-no2;
	cout<<"\nSubtraction : " <<ans;
}
void main()
{
	FunPtr ptr;
	clrscr();

	ptr = &addFun;
	ptr(20,10);

	ptr= &subFun;
	ptr(20,10);
	getch();
}