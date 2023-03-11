#include<iostream.h>
#include<conio.h>
class BC
{
public:
	int b;
	void show()
	{
		cout<<"\nBC -- show()---b : "<<b;
	}
};
class DC : public BC
{
public:
	int d;
	void show()
	{
		cout<<"\nDC -- show()---d : "<<d;
	}
};
void main()
{
	BC bobj;
	BC *bptr;
	DC dobj;
	clrscr();
	//bptr = &bobj;
	//bptr->b=100;
	//bptr->show();

	// Upcasting
	bptr = &dobj;

	// DownCasting
	((DC*)bptr)->d=200;
	((DC*)bptr)->show();

	getch();
}

