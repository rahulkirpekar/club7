#include<iostream.h>
#include<conio.h>
#include<string.h>
// pointer with object
class Product
{
private:
	int id;
	char name[50] ;
	float price;
public:
	void scan(int id,char name[],float price)
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
void main()
{
	Product *ptr;
	Product pobj;
	clrscr();

	ptr = &pobj;
	ptr->scan(1,"Monitor",1564.43);
	ptr->disp();

	getch();
}