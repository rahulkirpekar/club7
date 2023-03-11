#include<iostream.h>
#include<conio.h>
class Product
{
private:
	int id;
	char name[10];
	int price;
public:
	void scan()
	{
		cout<<"\nEnter Id : ";
		cin>>id;
		cout<<"\nEnter Name : ";
		cin>>name;
		cout<<"\nEnter Price : ";
		cin>>price;
	}
	void disp()
	{
		cout<<"\n"<<id<<"\t"<<name<<"\t"<<price;
	}
};
const int size = 2;
void main()
{
	Product *ptrObj1 =  new Product[size];
	int i;
	clrscr();

	Product *ptrObj2 = ptrObj1;

	for(i=0;i<2;i++)
	{
		ptrObj1->scan();
		ptrObj1++;
	}

	for(i=0;i<2;i++)
	{
		ptrObj2->disp();
		ptrObj2++;
	}
	getch();
}