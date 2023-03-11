#include<iostream.h>
#include<fstream.h>
#include<conio.h>
#include<string.h>
void main()
{
	char name[80],ch;
	int i,len=0;
	fstream f;
	clrscr();
	f.open("data.txt",ios::in | ios::out);
	cout<<"\nEnter Name : ";
	cin>>name;// royal
	len = strlen(name);//5---[0----4]
	for(i=0;i<len;i++)
	{
		f.put(name[i]);
	}
	f.seekg(0);
	for(i=0;i<len;i++)
	{
		f.get(ch);
		cout<<"\n"<<ch;
	}
	f.close();

	getch();
}

