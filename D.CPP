#include<iostream.h>
#include<conio.h>
#include<fstream.h>
void main()
{
	ofstream out("item.txt");
	clrscr();
	cout<<"\nEnter ItemName : ";
	char name[50];
	cin>>name;

	out<<name<<"\n";
	cout<<"\nEnter ItemPrice : ";
	int price;
	cin>>price;
	out<<price;

	out.close();

	ifstream in("item.txt");
	in>>name;
	in>>price;

	cout<<"\nName : "<<name;
	cout<<"\nprice : "<<price;

	in.close();

	getch();
}