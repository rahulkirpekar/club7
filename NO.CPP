#include<iostream.h>
#include<conio.h>

class B;
class A
{
private:
	int no1;
public:
	void set(int no1)
	{
		this->no1=no1;
	}
	void disp()
	{
		cout<<"\nA -- no1 : "<<no1;
	}
	friend void swap(A &obj1,B &obj2);
};
class B
{
private:
	int no2;
public:
	void set(int no2)
	{
		this->no2=no2;
	}
	void disp()
	{
		cout<<"\nB -- no2 : "<<no2;
	}
	friend void swap(A &obj1,B &obj2);
};
void swap(A &obj1,B &obj2)
{
	int temp = obj1.no1;
	obj1.no1 = obj2.no2;
	obj2.no2 = temp;
}
void main()
{
	A obj1;
	B obj2;
	clrscr();

	obj1.set(10);
	obj2.set(20);

	obj1.disp();
	obj2.disp();
	cout<<"\nAfter Swapping Logic : ";
	swap(obj1,obj2);
	obj1.disp();
	obj2.disp();

	getch();
}

