#include<iostream.h>
#include<conio.h>
class Product
{
	int code;
	float price;
public:
	void set(int code,float price)
	{
		this->code=code;
		this->price=price;
	}
	void disp()
	{
		cout<<"\nCode : "<<code <<"\tPrice : "<<price<<"---"<<this;
	}
};
const int SIZE = 2;
void main()
{
	Product *p = new Product[2];
	int code,i;
	float price;
	clrscr();
	cout<<"\nsizeof product object : "<<sizeof(*p);
	Product *d = p;
	for(i=0;i<2;i++)
	{
		cout<<"\nEnter Code : ";
		cin>>code;
		cout<<"\nEnter Price : ";
		cin>>price;
		p->set(code,price);
		p++;
	}
	for(i=0;i<2;i++)
	{
		d->disp();
		d++;
	}
	getch();
}