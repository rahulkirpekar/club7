#include<iostream.h>
#include<conio.h>
#include<string.h>
class Product
{
private:
	int id;
	char name[50];
	int price;
public:
	Product(){}
	void setProduct(int id,char name[],int price)
	{
		this->id=id;
		strcpy(this->name,name);
		this->price=price;
	}
	void disp()
	{
		cout<<"\n"<<id<<"\t"<<name<<"\t"<<price;
	}
};
const int SIZE = 3;
void main()
{
	Product *ptrs = new Product[SIZE];// 0 1 2
	Product *ptrd;
	int i,id,price;
	char name[50];
	clrscr();
	ptrd = ptrs;
	for(i=0;i<SIZE;i++)
	{
		// id,name,price
		cout<<"\nEnter Id : ";
		cin>>id;
		cout<<"\nEnter Name : ";
		cin>>name;
		cout<<"\nEnter Price : ";
		cin>>price;
		ptrs->setProduct(id,name,price);
		ptrs++;
	}
	for(i=0;i<SIZE;i++)
	{
		ptrd->disp();
		ptrd++;
	}

	getch();
}



