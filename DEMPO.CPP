#include<iostream.h>
#include<conio.h>
// Advanced Structure--->"class"
class Student
{
	// scope[private,protected,public]--->class Properties
//	class variable --->
		//class Properties = 1) Dm's  + 2) Mf's)(member Function)
private:
	int rno;
	char name[50];
	int std;
public:
	void scan()
	{
		cout<<"\nEnter Rno : " ;
		cin>>rno;
		cout<<"\nEnter Name : " ;
		cin>>name;
		cout<<"\nEnter Std : " ;
		cin>>std;
	}
	void disp()
	{
		cout<<"\n"<<rno<<"\t"<<name<<"\t"<<std;
	}
};
void main()
{
	Student s[5];// s[0],s[1],s[2],s[3],s[4]
	int i;
	clrscr();

	for(i=0;i<5;i++)
	{
		// i--0--s[0]
		s[i].scan();
	}
	for(i=0;i<5;i++)
	{
		s[i].disp();
	}
	getch();
}






