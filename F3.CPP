#include<iostream.h>
#include<fstream.h>
#include<conio.h>
void main()
{
	ofstream o;
	const int SIZE=100;
	char buffer[SIZE];
	clrscr();
	o.open("country.txt");
	o<<"ABCDEFGHIJKLMNOPQRSTUVWXYZ\n";
	o<<"PAKISTAN\n";
	o<<"CHINA\n";
	o<<"RASSIA\n";
	o.close();
	o.open("capital.txt");
	o<<"DELHI\n";
	o<<"ISLAMABAD\n";
	o<<"RUHAN\n";
	o<<"MOSCOW\n";
	o.close();
	getch();
}

