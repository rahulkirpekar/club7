#include<iostream.h>
#include<conio.h>
class TestApp
{
public:
	//   <-----------------------------------
	void add(int no1=10,int no2=20,int no3=30)
	{
		int ans;
		cout<<"\nNo1 : "<<no1;
				cout<<"\nNo2 : "<<no2;
		cout<<"\nNo3 : "<<no3;
		ans = no1+no2+no3;
		cout<<"\nAddition : " <<ans;
	}
};
void main()
{
	TestApp obj;
	int no1,no2,no3;
	clrscr();

	obj.add(1,2);

	getch();
}