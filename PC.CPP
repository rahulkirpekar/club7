#include<iostream.h>
#include<conio.h>
class Product
{
private:
	int code;
	float price;
public:
	void setData(int code,float price)
	{
		this->code=code;
		this->price=price;
	}
	void disp()
	{
		cout<<"\nCode : "<<code <<"\tPrice : " <<price;
	}
};
const int SIZE = 3;
void main()
{
	Product *sptr = new Product[SIZE];
	Product *dptr=sptr;
	int code,i;
	float price;
	clrscr();
	for(i=0;i<SIZE;i++)
	{
		cout<<"\nEnter Code : ";
		cin>>code;
		cout<<"\nEnter Price : ";
		cin>>price;
		sptr->setData(code,price);
		sptr++;
	}
	for(i=0;i<SIZE;i++)
	{
		dptr->disp();
		dptr++;
	}

	getch();
}