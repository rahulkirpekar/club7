#include<iostream.h>
#include<conio.h>
void main()
{
	int no1,no2,no3;
	clrscr();
	cout<<"\nEnter No1 : ";
	cin>>no1;
	cout<<"\nEnter No2 : ";
	cin>>no2;
	cout<<"\nEnter No3 : ";
	cin>>no3;
	if((no1!=no2) && (no2!=no3) && (no1!=no3))
	{
		if()
		{
			if()
			{

			}else
			{

			}
		}else
		{
			if()
			{

			}else
			{

			}
		}
	}else if((no1==no2) && (no2!=no3))
	{
		if(no1 > no3)
		{
			printf("no1 ans no2 are grater than no3");
		}else
		{
			printf("no3 is grea no1 and no2");
		}

	}else if((no1==no3) && (no2!=no3))
	{
		if(no1 > no2)
		{
			printf("no1 ans no3 are grater than no2");
		}else
		{
			printf("no3 is grea no1 and no2");
		}
	}
	else if((no2==no3) && (no1!=no3))
	{
		if(no1 > no2)
		{
			printf("no2 ans no3 are grater than no1");
		}else
		{
			printf("no3 is grea no1 and no2");
		}
	}
	getch();
}