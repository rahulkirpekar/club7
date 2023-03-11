#include<iostream.h>
#include<fstream.h>
#include<conio.h>
void main()
{
	ifstream i;
	const int SIZE=20;
	char buffer[SIZE];
	clrscr();
	i.open("country.txt");
	// eof
	while(i)
	{
		i.getline(buffer,SIZE);
		cout<<"\n"<<buffer;
	}
	i.close();
	i.open("capital.txt");
	// eof
	while(i)
	{
		i.getline(buffer,SIZE);
		cout<<"\n"<<buffer;
	}
	i.close();
	getch();
}
